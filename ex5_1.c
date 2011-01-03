#include <stdio.h>
#include <ctype.h>
#define SIZE 100
/* K&R Ex5_1: Modifies getint() function to not treat a + or - not followed by
a digit as a valid zero */

int getch(void);
void ungetch(int);
int getint(int *pn);



int getint(int *pn)
{
    int c, sign;
    
    while(isspace(c=getch()))
               ;
    if(!isdigit(c) && c!= EOF && c!= '+' && c != '-'){
                   ungetch(c);
                   return 0;
    }
    
    sign= (c =='-')? -1: 1;
    // returns 0 if + or - not followed by digit 
    if (c == '+' || c == '-')
       if( !isdigit( c = getch()) ){
           ungetch(c);
           return 0;
       }
       
    for(*pn = 0; isdigit(c); c= getch() )
            *pn =10 * *pn + (c -'0');
    *pn *= sign;
    if( c!= EOF)
        ungetch(c);
    return c;
    
}
    
int main()
{
    int n, array[SIZE] , getint(int *);
    
    for(n=0; n< SIZE && getint(&array[n])!= EOF; n++)
             printf("%d\n",array[n]);
             
    return 0;
    
}    
