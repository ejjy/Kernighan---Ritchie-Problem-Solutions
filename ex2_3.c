#include <stdio.h>
#include <ctype.h>

/* K&R Ex2_3: Function htoi(s) converts string of hexadecimal digits
into its equivalent integer value */
#define MAX  100

int htoi(char s[]);


int htoi(char s[])
{
    int i,n;
        
    n=0;
        
    for(i=0;  ;++i){    
           if( tolower(s[i]) >='a' && tolower(s[i])<='f' )
                n = 16 * n + ( tolower(s[i]) - 'a' + 10 );               
           
           else if( isdigit(s[i]) )
                n = 16 * n + (s[i] - '0');
           
           else if( (s[i] =='x'||s[i] == 'X') && n ==0)
                ;
           else 
                return n;
    }       
    return n; /* can I remove this? */              
                
}

int main()
{
    int i,c;
    char s[]="0xfFbBx51";
    
   
    printf("%d\n",htoi(s));
    
    return 0;
} 
