#include <stdio.h>
#define LOWER -30
#define UPPER 50
#define STEP 5



/* Ex K&R 1_4: Celsius-Fahrenheit conversion table
   for celsius = -30,...,0,5,...,50 */
   
main()
{
      float fahr, celsius, check_conv;
      
      
      celsius=LOWER;
      
      while(celsius <= UPPER){
                    fahr = (9.0/5.0)* celsius  + 32;
                    /* check conversion */
                    check_conv= (5.0/9.0) *(fahr -32.0);
                    printf("%3.1f %8.1f %8.0f\n", celsius, fahr, check_conv);
                    celsius=celsius+STEP;
                    }
                    
                    }
                    
