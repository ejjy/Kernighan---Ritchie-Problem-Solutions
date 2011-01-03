#include <stdio.h>

/* K&R Exercise 1-6: verify that the expression getchar()!=EOF is 0 or 1 */
/* copy input to output; 1st version */

main()
{
      int c;
      
 
         
         while (c != EOF){
               
               printf("EOF is: %d\n",EOF);
               c=getchar();
               printf("And c is: %d\n",c);   
         }
            
}
            
