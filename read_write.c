#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "example.h"

#define MAXLEN  5000



int readlines(char *lineptr[], int maxlines)
{
    char line[MAXLEN], *p;
    int len, nlines = 0, getline(char *line, int maxlen);
    
    while(nlines < maxlines && (len = getline(line,MAXLEN)) > 0){
                 if( (p = (char *)malloc(sizeof(char)* len) ) == NULL)
                     return -1;
                 strcpy(p,line);
                 lineptr[nlines++] = p;
    }
    return nlines;
}


void writelines(char *lineptr[], int nlines){
     while(nlines-- > 0)
         printf("%s\n", *lineptr++);
}

int getline(char *s, int maxlen)
{
    int c, i=0;
    
    while( i < maxlen && (c = getchar()) !=EOF && c != '\n')
           *(s + i++) = c;
    
    *(s+i) = '\0';
    if( c == '\n') 
        i++; 
        
    return i;
}
