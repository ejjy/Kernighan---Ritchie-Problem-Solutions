#include <ctype.h>

/*K&R ex5_2: getfloat() performs free-format input conversion to
float values one float per call*/

int getch(void);
void ungetch(int);


int getfloat(float *pn)
{
    int c, sign;
    float power;
    
    while(isspace(c=getch() ))
          ;
    if( !isdigit(c) && c !=EOF && c !='+' && c!= '-' && c != '.') {
        ungetch(c);
        return 0;
    }
    
    sign = (c== '-')? -1:1;
    
    if (c== '+' || c == '-')
       if(!isdigit(c =getch() && c != '.'){
                     ungetch(c);
                     return 0;
       }
    for(*pn =0; isdigit(c); c=getch())
            *pn = 10.0* *pn + (c - '0');
    
    if(c == '.')
         getch(c);
    
    for(*pn=0, power =1.0; isdigit(c); c=getch()){
               *pn = 10.0 * *pn + (c - '0');
               power *= 10.0;
    }
    
    *pn *= (sign/power);
    
    if( c != EOF)
        ungetch(c);
    return c;
    
}
