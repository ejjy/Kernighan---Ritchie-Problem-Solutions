#include<stdio.h>

/*K&R ex2_8: function rightrot(x,n) returns value of integer x 
rotated to the right by n bit positions */

unsigned setbits(x,p,n,y);
unsigned rightrot(x,n);


unsigned rightrot(x,n)
{
         

         
}


unsigned setbits(x,p,n,y)
{
         unsigned right_1n;
             
         right_1n =~(~0<<n); /* makes rightmost n bits, 1s */
                
         return (  ( x| ~(right_1n <<(p-n)))  & ((y & right_1n) << (p-n) )   );
}
