#include <stdio.h>

/*K&R ex1_17: prints all input lines that are longer than 80 characters */

#define MAXLINE 1000
#define PRINTLEN 80

int getline(char s[]);


int main()
{
      int len;
      char line[MAXLINE]; 

      while( (len = getline(line))>0)
             if(len >=PRINTLEN)
                    printf("%s\n",line);     
      
      return 0;
}


int getline(char s[])
{
    int i,c;
    
    i=0;
    
    while( i< (MAXLINE-1) && (c =getchar()) != EOF && c!='\n'){
             s[i]=c;
             ++i;
    }
    
    if(c == '\n'){
         s[i] =c;
         ++i;
    }
    s[i] = '\0';
         
    return i;
}
