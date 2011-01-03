#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "example.h"


#define MAXLINES 5000
char *lineptr[MAXLINES];

int main(int argc, char *argv[])
{
    
    int nlines;
    int numeric = 0, rev = 0;
      
    
    if(argc > 1 && strcmp(argv[1], "-n") == 0)
            numeric = 1;
    if(argc > 1 && strcmp(argv[1], "-r") == 0)
            rev = 1;
            
    if( (nlines = readlines(lineptr, MAXLINES)) >= 0){
        qsort( (void**) lineptr, 0, nlines-1, 
               (numeric)? (Fp)numcmp :(Fp)strcmp);
        if(rev == 1)
           reverse((void**)lineptr,nlines);       
        writelines( lineptr , nlines);
    } else {
           printf("input too big to sort \n");
           return 1;
    }
}

int numcmp(char *s1, char *s2)
{
    double v1, v2;
    
    v1 = atof(s1);
    v2 = atof(s2);
    if( v1 < v2)
        return -1;
    else if (v1 > v2)
         return 1;
    else
        return 0;
}



