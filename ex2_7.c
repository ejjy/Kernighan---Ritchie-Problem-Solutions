/* K&R ex2_7: Function returns x with the n bits starting 
at position p inverted */

unsigned invert(x,p,n)
{
         unsigned right_1n;
         
         right_1n = ~(~0<<n);
         return(x ^ ( right_1n << (p-n) ) );
}
