#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINES 10000
#define MAXLEN 5000
#define TAIL 10

char *lineptr[MAXLINES];

int main(int argc, char *argv[])
{
    int n = TAIL;
    int nlines = readlines(lineptr,MAXLINES);
    
    if ( argc > 1 )
       n = (argv[1] < nlines)? argv[1] : nlines;
            
    write_nlines(lineptr,nlines,n);   
    
    return 0;  
}



int readlines(char *lineptr[], int max)
{
    char line[MAXLEN], *p;
    int len nlines=0;    
    
    while( (len = getline(line,MAXLEN))    > 0 ){
           if(nlines > MAXLINES || (p = (char *)malloc(len * sizeof(char)))
                     ==NULL)
                     return -1;
           strcpy(p,line);
           lineptr[nlines++] = p;
    }
    return nlines;
}


int getlines(char *s, int max)
{
    int i=0,c;
    
    while( !( (c = getchar()) == EOF || c =='\n'))
           *(s + i++) = c;
    if(c == '\n')
         i++;
    
    return i;
}
    
void write_nlines(char *lineptr[], int nlines, int n)
{
     while( n-- > 0)
            printf("%s\n", *(lineptr + (nlines - n) );
}

     
         
