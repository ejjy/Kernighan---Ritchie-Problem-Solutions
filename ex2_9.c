#include <stdio.h>

/*K&R ex2_9 : A faster version of bitcount() using the observation
that x&=(x-1) deletes the rightmost 1-bit in x */

/*Explanation:
 x and (x-1) have the same bits in the same position except for the 
 position of the rightmost 1 bit in x which is a 0 bit in x-1 and, if
 that is not the rightmost bit, the next bit which is a 0 bit in x
 and a 1 bit in x-1. Thus setting x & x-1 is equivalent to 
 x & x before the rightmost 1 bit and 0 afterwards since 
 x and x-1 have the same bits only when both have 0 bits */
 
 int bitcount(unsigned x)
 {
     int i;
     
     for(i=0; (x &= (x-1)) != 0 ; ++i)
              ;
              
     return i;
     
}
           
