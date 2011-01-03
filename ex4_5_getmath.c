#include "calc.h"
#include <ctype.h>
#include <string.h>
//function getmath() gets string, compares to names of math functions
// in array math_functions and returns -1 if no match
#define MAX 10


static int length = sizeof(math_functions)/sizeof(math_functions[0]);

int getmath(char c)
{
    int i = 0, j;
    char s[MAX];
    s[0] = c;
    while( isalpha(c = getch()) )
           s[++i] = c;
    s[++i] = '\0';
    
    
    for( j=0; j < length; j++)
         if(!strcmp(s,math_functions[j]) )
                 return j;
             
    ungetch(c);
    return -1;                        

}
           
