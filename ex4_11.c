#include <ctype.h>
#include "calc.h"

#define BUFSIZE 100
#define GETCH (buf > 0)? buffer[buf--]:getchar()

static int buf = 0;


int getop (char s[])
{
    static char buffer[BUFSIZE];        
    int i,c;
    
    while( s[0] = (c = getchar() ) == ' ' || c =='\t') 
           ;
     
    s[1] ='\0';
    if(!isdigit(c) && c != '.'  )
                   return c;
    i=0;         
    if(isdigit(c))
       while(isdigit(s[++i] = c = GETCH ) )
                  ;
    if(c == '.')
       while(isdigit(s[++i]=c= GETCH ))
                  ;                                      
    
    s[i] = '\0';
        
    if(c != EOF)
         buffer[buf++]=c;
    
    
    
    return NUMBER;
    
}
