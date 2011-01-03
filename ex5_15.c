#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "example.h"


#define MAXLINES 5000
char *lineptr[MAXLINES];

int main(int argc, char *argv[])
{
    
    int nlines;
    int numeric = 0, rev = 0, fold =0;
    Fp fp = NULL;//function pointer
      
    for(i=1; --argc > 0; i++){
                 if(strcmp(argv[i],"-n")==0 && fp == NULL)
                     fp = (Fp)numcmp;
                 else if(strcmp(argv[i],"-r")==0)
                     rev = 1;   
                 else if(strcmp(argv[i],"-f")==0 && fp = NULL)
                     fp = (Fp)strcmp_n;   
                 else
                     fp = (Fp)strcmp;               
    }
        
            
    if( (nlines = readlines(lineptr, MAXLINES)) >= 0){
        qsort( (void**) lineptr, 0, nlines-1, fp);
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

int strcmp_nc(char *s, char *t)
{
    int i =0;
    while(tolower(*s++) == tolower(*t++)){
               if(*s == '\0')
                     return 0;
    }
    return *s - *t;
}
    

