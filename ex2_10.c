#include <stdio.h>

/*K&R ex2_10: Function converts upper case letters to lower case
using a conditional expression */

int lower(int c);

int lower(int c)
{
    return( (c >='A'&& c <='Z')? c+'a'-'A' : c );
}
int main()
{
     
    putchar(lower('D'));
    return 0;
}
