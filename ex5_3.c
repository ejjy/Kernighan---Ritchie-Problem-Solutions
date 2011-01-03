#include <stdio.h>

/*K&R Ex5_3: modifies strcat() to use pointer arguments */
void strcat(char *s, char *t);

int main()
{
    char s[] =" Jonghi";
    char t[] =" Klaas";
    strcat(s,t);
    
    printf("%s\n", s );
 
    return 0;   
}
    


void strcat(char *s, char *t)
{
     while(*s++)
          ;
     --s;     
     while(*s++ = *t++)
          ;
          
}
