module bidding

import iTasks

// Start = [(a,b) \\ a <- ['a', 'b', 'c'] & b <- [1,2,3]]

Start w = doTasks (do_bidding`) w

offer :: Int -> Task Int
offer n = updateInformation [] n >>*
    [OnAction (Action "Bid") (ifValue (\a -> a >= 0) (return))]

// offer :: Int -> Task Int
// offer n = updateInformation [] n >>* [OnAction ActionOk confirm]
//     where
//     confirm :: (TaskValue Int) -> ?(Task Int)
//     confirm (Value n _)
//     | n > 0 = ?Just (return n)
//     confirm _ = ?None

// bidding :: [(Int, User)] Int -> Task Int
// bidding bids low = allTasks (map (\(bid, user) -> user @: (offer bid)) bids)
//     >>- \new_bids -> if ([b \\ b <- new_bids | b < low] == [])
//                         (return (minList new_bids))
//                         (bidding bids low)

bidding :: [(Int,User)] Int -> Task Int
bidding parties low
= allTasks [u @: offer n \\ n<-ns & u<-us] >>* [OnValue (check us low)]
    where
    (ns, us) = unzip parties

check :: [User] Int (TaskValue [Int]) -> ? (Task Int)
check us low (Value vs _)
    | low <= min = ?Just (return min)
    | otherwise = ?Just (bidding (zip2 vs us) low)
        where
        min = minList vs
check _ _ _ = ?None

do_bidding :: Task Int
do_bidding = offer 0 >>- \low -> get users >>- \us -> bidding [(low,u) \\ u <- us ] low


do_bidding` = offer 0 >>- \low -> get users >>- \us -> withShared (0,low) (\sds ->
    bidding` sds [(low,u) \\ u <- us] low
    )

bidding` :: (SimpleSDSLens(Int,Int)) [(Int, User)] Int -> Task Int
bidding` sds parties low = get sds >>- \(round,roundlow) -> (viewInformation [] round ||- allTasks (offerTasks roundlow))
    >>* [OnValue (check` users low sds)]
        where
            users = map snd parties
            offerTasks roundlow = [user @: offer roundlow \\ (bid, user) <- parties]

check` :: [User] Int (SimpleSDSLens(Int,Int)) (TaskValue [Int]) -> ? (Task Int)
check` us low sds (Value vs _)
    | low <= min = ?Just (upd (\(r,rl) -> (r+1,roundlow)) sds >-| return min)
    | otherwise = ?Just (upd (\(r,rl) -> (r+1,roundlow)) sds >-| (bidding` sds (zip2 vs us) low))
        where
        min = minList vs
        roundlow = minList vs
check` _ _ _ _ = ?None
