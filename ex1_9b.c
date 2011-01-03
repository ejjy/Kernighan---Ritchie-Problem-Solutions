#include <stdio.h>

/* K&R ex1_9: Copies input to output replacing each string of one
   or more blanks by a single blank */


main()
{
      int c, blanks;
      blanks=0;
      
      while( (c=getchar() ) != EOF){
             if(c==' '|| c=='\t')  
               if(blanks==0){
                          putchar(' ');
                          blanks =1;
                          } 
               
                   
             else{
                  if (blanks ==1)
                       blanks = 0;
                     
                  putchar(c);
                  }
             }
             
}
