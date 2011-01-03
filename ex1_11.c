#include <stdio.h>

/* K&R ex1_12: A program that prints its input one word per line */


main()
{
      
      int c;
      int mblnk;
      
      mblnk=0; /* variable to make sure newline not repeated for multiple
                  blank spaces */
      
      while( (c=getchar()) != EOF){
             if(c !=' ' && c!='\t'){
                  putchar(c);
                  mblnk=1;
                  }
             else
                 if(mblnk == 1){
                          printf("\n");
                          mblnk=0;
                          }
             }
                 
                 
                 
} 
