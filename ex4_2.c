#include <stdio.h>
#include <ctype.h>
#include "header.h"


/* K&R Ex4_2: atof() function extended to handle scientific notation of
the form 123.45e-6 */

double atof(char s[])
{
       double val, exp_val , power;
       int i,j,sign,exp_sign;
       
       for(i=0; isspace(s[i]); i++)
                ;
       sign = (s[i]=='-')? -1: 1;  
       if(s[i] == '+' ||s[i] == '-')
               i++;
       for(val =0.0 ; isdigit(s[i]) ; i++)
               val = val * 10.0 + (s[i] -'0');
       if(s[i] =='.')
               i++;
       for(power=1.0; isdigit(s[i]) ; i++) {
                val = val * 10.0 + (s[i] -'0');
                power *= 10.0;
       }
       if(s[i] == 'e' || s[i]=='E')
               i++;
       else
           return sign * val /power;
           
       exp_sign = (s[i]=='-')? -1:1;
       if(s[i] == '+' || s[i] == '-')
               i++;
       for( exp_val =0; isdigit(s[i]); i++)
            exp_val = exp_val * 10 + (s[i] -'0');
    
       for(j = 0; j < exp_val; j++)
             (exp_sign == -1)? power*=10: power/=10;
       
       return sign * val /power;      
}       
  
    
                          

    
    
           
        

