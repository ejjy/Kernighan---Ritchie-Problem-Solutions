/* K&R ex2_6: Function 'setbits(x,p,n,y)' returns x with the n bits that begin at position p
set to the rightmost n bits of y, leaving the other bits unchanged */

/*I'm confused about whether the first bit position from the right 
is position 1 or 0. The K&R example only makes sense to me if its 0. 
Here I'll assume its 1 */



unsigned setbits(x,p,n,y)
{
         unsigned right_1n;
             
         right_1n =~(~0<<n); /* makes rightmost n bits, 1s */
                
         return (  ( x| ~(right_1n <<(p-n)))  & ((y & right_1n) << (p-n) )   );
}


 /*  */
 /* x & (right_1<<p-n)  = x from p to p-n, 0 elsewhere*/



