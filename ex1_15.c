#include <stdio.h>

/* K&R Exercise 1-15: Temperature conversion program using function to convert
* temperature */

float convert_temp(int);

int main()
{
    int i, fahr;
   
    printf("\nTemperature Conversion: Fahr -> Celsius\n");
    printf("========================================\n");
    
    for(fahr = 0; fahr < 300; fahr = fahr + 20 )
             printf("%4d deg. fahr. = %6.0f cels.\n",fahr , convert_temp(fahr) );
    return 0;    
          
       
          
}

float convert_temp(int m)
{
        float cent;                
        cent = (5.0/9.0)*(m-32.0);
        return cent;
        
}
