#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <limits.h>

/*K&R ex2_1: Determines the range of char,short,int,long both signed and unsigned by printing
from header and by direct computation */


/*define (assumed) bit length for types short,int and long */
#define SHORT_BIT   16
#define LONG_BIT    32
#define INT_BIT     32


double sgetmin(int bit);
double sgetmax(int bit); 
double ugetmin(int bit);
double ugetmax(int bit);

int main()
{
  
    
    /*Printing from standard header */
    printf("Type    \t\t\tRange\n");
    printf("--------\t\t\t-----\n");
    
    printf("Signed Char\t %12d : %12d \n",CHAR_MIN,SCHAR_MAX );
    printf("Unsign Char\t %12d : %12d \n",0,UCHAR_MAX);
    
    printf("Signed Char\t %12d : %12d \n",SHRT_MIN,SHRT_MAX );
    printf("Unsign Char\t %12d : %12d \n",0,USHRT_MAX);
    
    printf("Signed Char\t %12ld : %12ld \n",INT_MIN,INT_MAX );
    printf("Unsign Char\t %12lu : %12lu \n",0,UINT_MAX);
    
    printf("Signed Char\t %12ld : %12ld \n",LONG_MIN,LONG_MAX );
    printf("Unsign Char\t %12lu : %12lu \n\n",0,ULONG_MAX);
       
    
    /*By Direct Computation. */
    
      printf("Signed Char\t %12.0f : %12.0f \n",sgetmin(CHAR_BIT),sgetmax(CHAR_BIT) );
      printf("Unsign Char\t %12.0f : %12.0f \n",ugetmin(CHAR_BIT),ugetmax(CHAR_BIT));
    
      printf("Signed Shrt\t %12.0f : %12.0f \n",sgetmin(SHORT_BIT),sgetmax(SHORT_BIT) );
      printf("Unsign Shrt\t %12.0f : %12.0f \n",ugetmin(SHORT_BIT),ugetmax(SHORT_BIT) );
    
      printf("Signed Int\t %12.0f : %12.0f \n",sgetmin(INT_BIT),sgetmax(INT_BIT) );
      printf("Unsign Int\t %12.0f : %12.0f \n",ugetmin(INT_BIT),ugetmax(INT_BIT) );

      printf("Signed Long\t %12.0f : %12.0f \n",sgetmin(LONG_BIT),sgetmax(LONG_BIT) );
      printf("Unsign Long\t %12.0f : %12.0f \n",ugetmin(LONG_BIT),ugetmax(LONG_BIT) );

      

      
      
    
    return 0;
}    

/* function returns the min value signed data type with n bits */
double sgetmin(int n)
{
      return  -(pow(2.0f,n)/2.0f);
}
double sgetmax(int n)
{
      return ( (pow(2.0f,n)/2.0f)- 1.0F);
}
      
double ugetmin(int n)
{
      return 0;
}
double ugetmax(int n)
{
      return ( pow(2.0f,n) -1.0f);
}
