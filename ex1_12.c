#include <stdio.h>
/* K&R Exercise 1-12: A program that prints its input one word per line */

#define IN  1
#define OUT 0


main()
{
      int c;
      
      
      
      
      while( (c=getchar()) != EOF){
             
             if(c==' ' || c=='\n' || c=='\t'){
                     printf("\n");
                     }
             else 
                  putchar(c);
                  
                  }
}     
      



             
