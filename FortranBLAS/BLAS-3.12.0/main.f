      program main
         double precision x(5)
         double precision :: d1
         double precision :: d2
         double precision :: x1
         double precision :: y1
         d1 = -4375.300000
         d2 = -4375.300000
         x1 = -4.600000
         y1 = 0.000000
         x(1) = 0.D0
         x(2) = 1.D0
         x(3) = 2.D0
         x(4) = 3.D0
         x(5) = 4.D0

         print*, "The value of d1 is", d1
         print*, "The value of d2 is", d2
         print*, "The value of x1 is", x1
         print*, "The value of y1 is", y1
         do, i=1,5
            print*, "Arrval is", x(i)
         enddo

         call DROTMG(d1,d2,x1,y1,x)

         print*, "The value of d1 is", d1
         print*, "The value of d2 is", d2
         print*, "The value of x1 is", x1
         print*, "The value of y1 is", y1
         do, i=1,5
            print*, "Arrval is", x(i)
         enddo
      end program main