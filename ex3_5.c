#include <stdio.h>
#include <stdlib.h>

/* K&R ex3_5: itob(n,s,b) converts integer n into a base b
character representation in the string s */
#define MAX 20


void itob(int,char [], int);

//typedef int base;

void itob(int n, char s[], int b)
{
     int i=0, sign;
     
     sign = n;
     
     do {
         s[i++] = abs(n% b) + '0';
     } while ((n /= b) != 0 );
     if (sign < 0)
        s[i++] = '-';
        //reverse(s);
     s[i]= '\0';
        
}

  
int main()
{
    
    int n = 16, b=10;
    char s[MAX];
    itob(n,s,10);
    
    printf("%s\n",s);
    
    return 0;
}
