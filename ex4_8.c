#include "calc.h"

/*K&R ex4_8: modifies getch() and ungetch() to deal
with only one character of pushback */

static int buf=0;
static char buffer;

int getch(void)
{
    if(buf > 0){
           buf = 0;
           return buffer;
           }
           
    return getchar();
}

void ungetch(int c)
{
     if (buf > 1)
        printf("Ungetch: too many characters");
     else
         buffer = c;
