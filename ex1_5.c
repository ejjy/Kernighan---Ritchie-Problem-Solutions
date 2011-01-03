#include <stdio.h>
# define LOWER  0
# define UPPER  300
# define STEP  20
/* k&R Ex 1_5: modify temp conversion program to print in reverse order */
   
main()
{
      float fahr;
      
      
      for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
               printf("%3.0f %6.1f\n",fahr, (5.0/9.0)*(fahr-32.0) );
               
      
      
}
