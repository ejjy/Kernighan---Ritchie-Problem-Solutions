#include <stdio.h>

/* K&G Exercise 1-14: A program that prints a histogram of the frequencies of different 
   characters in its input */
   


main()
{
      int c,i,z,match;  
      int nchars[100];
      int chars[100]; /* character array */
      
      /* initialize nchars and chars array */
      for(i=0; i<100; ++i){
               nchars[i]=0;      
               chars[i] =0;
               }
      z=1;         
               
      while( (c = getchar()) != EOF){
                 match= 0;
                 
                 if(c != ' ' && c != '\t' && c != '\n' && c != '\b'){ /* ignore blanks */
                      
                     if( c == 0)          /*To avoid updating count of empty cells when */
                         ++nchars[0];     /*input character is 0 */
                     
                     else {     
                        for(i=0; i < 100; ++i){
                                 if( c == chars[i]){
                                         ++nchars[i];
                                         match = 1;
                                         }
                                         }
                     
                        if(match ==0){
                              chars[z] = c;
                              ++nchars[z];
                              ++z;
                                  }
                         
                         }
                 } 
      }/*end while */
                 
                 
     /* Print Histogram */
     z=1; /* Reset variable for reuse as counter */
     while(chars[z] !=0){
              putchar(chars[z]);
              printf("\t frequency = %d\n",nchars[z]);
              ++z;
              
              }
              
}
