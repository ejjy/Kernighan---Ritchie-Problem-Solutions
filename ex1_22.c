#include <stdio.h>

/*K&R ex1_22: Program "folds" input lines exceeding MAXLINE in length into shorter
lines after the last non-blank character. If line is too long it folds anyway 
wether character is last non-blank character or not*/

#define MAXLINE 50
#define MAXMAX  63


int getstring( char s[]);

int main()
{
    char line[MAXMAX];
    int len;
    
    while( (len = getstring(line)) >0 )
           printf("%s",line);
           
    return 0;
}

int getstring(char s[])
{
    int c;
    int i=0;
    
    while( i < MAXMAX-1 && (c=getchar() )!= EOF &&  c!='\n'  ){
           if(i > MAXLINE)
                if(c ==' ' ||c == '\t')
                     break;
           s[i++] = c;
    }
    
    if(c=='\n')
               s[i++]=c;
    
    s[i]='\0';
    
    return i;
}
