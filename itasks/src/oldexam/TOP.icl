module TOP

import iTasks
import Text

// stockSDS stores the current stock of tiles (initially the double six set)
stockSDS :: SimpleSDSLens [Tile]
stockSDS = sharedStore "stock" (flatten [[{Tile | end1 = a, end2 = b} \\ b <- [0..a]] \\ a <- [0..6]])

// lineSDS stores the current line (initially empty)
lineSDS :: SimpleSDSLens Line
lineSDS = sharedStore "line" []

Start w = doTasks test_game w

// use this task to test the task function play (question 1)
test_play
  = initializegame >>- \tiles =
    viewSharedInformation [ViewAs (showlist o map (\_ = "X"))] stockSDS  // display how many tiles are in stock
       ||-
     viewSharedInformation [ViewAs showlist] lineSDS                      // display the current line
       ||-
     play tiles

// use this task to test the task function game (question 2)
test_game
  = initializegame >>- \tiles =
    (viewSharedInformation [ViewAs (showlist o map (\_ = "X"))] stockSDS  // display how many tiles are in stock
       ||-
     viewSharedInformation [ViewAs showlist] lineSDS                      // display the current line
       ||-
     game tiles
    ) >>- \bounty =
    viewInformation [] (if (bounty == 0) "Hurray, you played all tiles" ("Too bad, your bounty is -" <+ bounty))

:: Side = West | East
derive class iTask Side
:: Tile = { end1 :: Int, end2 :: Int }   // ends are between 0 and 6 (both inclusive)
derive class iTask Tile
:: Line :== [Tile]                       // the line under construction
instance toString Side
   where toString West = "West"
         toString East = "East"
instance ~ Tile
   where ~ t = {Tile | end1 = t.end2, end2 = t.end1}
instance ~ Side
   where ~ West = East
         ~ East = West
instance  == Tile
   where (==) t1 t2 = (t1.end1,t1.end2) == (t2.end1,t2.end2) || (t1.end1,t1.end2) == (t2.end2,t2.end1)
instance toString Tile
   where toString {Tile | end1,end2} = "(" <+ end1 <+ "," <+ end2 <+ ")"

// showlist xs prints the list @xs, surrounded by '[' and ']' and elements separated by ','
showlist :: [a] -> String | toString a
showlist xs = "[" <+ join "," (map toString xs) <+ "]"

// the rank of a tile is the sum of pips at both ends of @tile
rank :: Tile -> Int
rank t = t.end1 + t.end2

// west line returns the west-most tile from the non-empty @line
west :: Line -> Tile
west line = hd line

// east line returns the east-most tile from the non-empty @line
east :: Line -> Tile
east line = last line

// matches left right is true only if @left can be placed to the west of @right (matching ends have the same number of pips)
matches :: Tile Tile -> Bool
matches left right = left.end2 == right.end1

// grab n list is the task that returns a list of @n different elements from @list and the list from which these elements are removed
grab :: Int [a] -> Task ([a],[a]) | iTask a & Eq a
grab n tiles
| n <= 0 || isEmpty tiles = return ([],tiles)
grab n tiles              = randomChoice tiles >>- \tile = 
                            let tiles` = removeMember tile tiles
                             in grab (n-1) tiles` >>- \(pick,remains) = 
                                return ([tile:pick],remains)

// matchingtiles side tiles line returns the tiles from @tiles that match at the indicated @side of @line
matchingtiles :: Side [Tile] Line -> [Tile]
matchingtiles West tiles line = [tile \\ tile <- tiles | matches tile (west line) || matches (~tile) (west line)]
matchingtiles East tiles line = [tile \\ tile <- tiles | matches (east line) tile || matches (east line) (~tile)]

// add side tile line adds @tile to @line at the indicated @side with their matching ends
// if there is no match, the line is not changed
addtile :: Side Tile Line -> Line
addtile West tile line
| matches   tile  (west line) = [ tile : line]
| matches (~tile) (west line) = [~tile : line]
| otherwise                   = line
addtile _    tile line
| matches (east line)   tile  = line ++ [ tile]
| matches (east line) (~tile) = line ++ [~tile]
| otherwise                   = line

// initializegame sets up a one-player game of dominoes:
// 7 tiles are taken from the stock and returned as task value;
// 1 tile  is  taken from the stock and used as starting line;
// the remaining tiles are stored in stock
initializegame :: Task [Tile]
initializegame
  = get stockSDS >>- \stock =
    grab 7 stock >>- \(tiles,stock) =
    grab 1 stock >>- \(start,stock) =
    set start lineSDS  >-|
    set stock stockSDS >-|
    return tiles

// grabstocktile selects a random element from the current content of stockSDS, removes it from stockSDS, and returns the selected element
grabstocktile :: Task Tile
grabstocktile
   = get stockSDS >>- \stock =
     randomChoice stock >>- \choice =
     set (removeMember choice stock) stockSDS >-|
     return choice

/* Question 1:
   play tiles displays to the user her current collection of @tiles.
   Based on the current content of the line (stored in linesSDS), the user is offered with actions to:
   (a) for each tile in @tiles that matches the west end of the current line, play that tile correctly to the west of the current line (and store it in linesSDS)
   (b) for each tile in @tiles that matches the east end of the current line, play that tile correctly to the east of the current line (and store it in linesSDS)
   (c) take another tile from the current stock (stored in stockSDS), remove it from stockSDS
   The return value of play is the new collection of @tiles (one removed in case (a) and (b) and one added in case (c))
*/
play :: [Tile] -> Task [Tile]
play tiles = get lineSDS
   >>- \line -> viewInformation [ViewAs showlist] tiles
   >>* ([OnAction (Action ("West" +++ (toString tile))) (\_ = ?Just (playtiles West tile tiles))
   \\ tile <- matchingtiles West tiles line]  ++
   [OnAction (Action ("East" +++ (toString tile))) (\_ = ?Just (playtiles East tile tiles))
   \\ tile <- matchingtiles East tiles line] ++ 
   [OnAction (Action "Grab new tile") (\_ = ?Just (getstack tiles))])
   where
      playtiles :: Side Tile [Tile] -> Task [Tile]
      playtiles side tile tiles = upd (\oldLine -> (addtile side tile oldLine)) lineSDS >>- \_ -> return (removeMember tile tiles)
      getstack :: [Tile] -> Task [Tile]
      getstack tiles = get stockSDS >>- \[newTile:newStack] -> upd (\oldStack -> newStack) stockSDS >>- \stack -> return ([newTile:tiles]) 

/* Question 2:
   Use play (assume that you have a correct implementation) to implement:
   game tiles lets the user play one action (using play) which changes the player's @tiles.
   If the resulting @tiles are empty, the game is over with no bounty (result value is 0);
   if the stock is empty, the game is also over but the bounty is the sum of ranks of remaining @tiles (which is the return value);
   in any other case the game continues with the new @tiles.
*/
game :: [Tile] -> Task Int
game tiles = get stockSDS >>- \stock ->
      case (tiles, stock) of
      ([],_) = return 0
      (ts,[]) = return (foldr (\a b -> (rank a) + b) 0 ts)
      (ts,st) = play ts >>- game
