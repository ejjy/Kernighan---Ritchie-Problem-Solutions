#include <stdio.h>

/* K&R Ex1_13: Prints a histogram of lengths of words of its input */

#define X_BIN 12
#define Y_BIN 12



main()
{
      
      int c,i,j;
      int len;
      int bin[X_BIN];
      
      c=len=0;
      
      for(i=0; i < X_BIN; ++i)
               bin[i]=0;
      
      
      
      
      while( (c=getchar()) != EOF){
             if(c==' ' || c =='\t' || c=='\n'){
                     if(len >= (X_BIN-1) )
                            ++bin[X_BIN-1];
                     else
                         ++bin[len];
                     
                     len = 0;
                     }
             else
                 ++len;
             }
             
      /* ff lines to make sure last word is counted when file
      doesn't end with a blankspace */
             
      if(len >= (X_BIN -1 ) )
             ++bin[X_BIN-1];
      else
             ++bin[len];  
             
                  
      /*HISTOGRAM */
      printf("Freq\n");
      printf("____\n");
      for(j=(Y_BIN-1); j >0 ; --j){
               printf("%4d|\t",j);
               
               for(i =1; i < X_BIN; ++i){
                     if(bin[i] >= j)
                         printf("*  ");
                     else
                         printf("   ");
                         }        
               
               printf("\n");
               
               }

               printf("_________________________________________\n");
               printf("Wlen\t1  2  3  4  5  6  7  8  9 10 >10");




}
