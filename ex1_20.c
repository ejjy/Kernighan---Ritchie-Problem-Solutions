#include <stdio.h>

/* K&R ex1_20: Program replaces tabs in the input with a proper number of blanks
to the next tab stop. The tab stops are every MYTAB columns */

#define MYTAB 7
#define MAXLINE 1000

int getline(char s[]);
void detab(char newline[], char oldline[]);

int main()
{
    int len;
    char line[MAXLINE];
    char newline[MAXLINE];
    
    while ( (len = getline(line)) >0){
          detab(newline,line);
          printf("%s",newline);
    }
    
    return 0;
}



void detab(char newline[], char oldline[])
{
     int ntab;
     int i,j;
     i=j=0;
     ntab = 0;
     

     while(oldline[i] != '\0'){
                      /* update ntab to the next mytab stop */
                      if(j >= ntab)
                           ntab += MYTAB;
                                             
                      /* check for tab input, replace, update counter 
                      to next mytab stop  */     
                      if(oldline[i] == '\t')                                   
                           while(j < ntab ){
                                   newline[j]=' ';
                                   ++j;
                           }
                      else{
                          newline[j]=oldline[i];
                          ++j;
                      }
                      ++i;
                      
     }
     newline[j]='\0';
              
}          
int getline(char s[])
{
    int c,i;
    
    i=0;
    while( (c=getchar()) != EOF && c != '\n' && i < MAXLINE-1){
           s[i]=c;
           ++i;
    }
    if(c=='\n'){
           s[i]=c;
           ++i;
    }
    s[i]='\0';
    
    return i;
}
