#include <stdio.h>

/* K&R ex1_18: program removes trailing blanks and tabs from each line
of input and deletes entirely blank lines */

#define MAXLINE 1000

int getline(char s[]);
void printline(char s[], int len);

int main()
{
      int len;
      char line[MAXLINE];
      
      len =0;
      
      while( (len = getline(line) ) > 0)
             printline(line,len);
      return 0;
}

int getline(char s[])
{
    int i,j,c;
    
    i=j=0;
    
    while( (c=getchar()) != EOF && c!='\n' && i < MAXLINE-1){
      
           s[i]=c;
           ++i;
           if(c !=' ' && c !='\t')
                j=i;
    }

           
    if(j < i){  /*ends with a trailing blank or tab */
         printf("Warning!!!Trailing Blanks\n"); 
         i=j;
    }
 
    if(c =='\n'){
         s[i]=c;
         ++i;
    }
    
    s[i]='\0';
     
    return i;
}
void printline(char s[],int len)
{
    int i;
    /*
    char printstring[MAXLINE];
    
    for(i=0 ; s[i]!='\0'; ++i)
            printstring[i]=s[i];
    
    printstring[i]='\0'; */
    
    if(len > 1)
           printf("%s",s);
    return;
} 
