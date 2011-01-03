#include <stdio.h>

/* K&R Exercise 1-13: Program that prints a histogram of the lengths of words in its input.*/
/* Histogram is horizontally oriented and made up of one or more '0''s */


main()
{
      int c,i;
      int nwords[1000];


      for ( i=0; i < 1000; ++i){  /* initialize nwords array */
           nwords[i]=0;
           
           }
      i=0;                  /*reset counter variable */
          
      while( (c = getchar()) != EOF){
             if(c !=' ' && c != '\t' && c != '\n'){
                  ++nwords[i];
                  }
             else{
                 ++i;
                            }
          }
      
      
      i=c=0;   /* reuse variables as counters */

/*Prints Histogram */
      while( nwords[i] !=0 ){
             
             for(c = 0; c < nwords[i] ; ++c)
                   printf("%d",0);
             printf("\n"); 
             /*printf("%d ,",nwords[i]);*/
             ++i;
             } 
}
