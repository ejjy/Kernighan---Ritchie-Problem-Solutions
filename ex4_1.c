#include <stdio.h>
#define MAXLINE 1000

/*K&R ex4_1: Write a function strrindex(s,t) which returns the position of the
rightermost occurence of t in s, or -1 if there is none */

int getline(char line[], int max);
int strrindex(char source[], char searchfor[]);

char pattern[] ="ould";
    

int main()
{
    char line[MAXLINE];
    int found=0;

    
    while(getline(line,MAXLINE) > 0)
                                if ( strrindex(line,pattern) >= 0){
                                    printf("%s",line);
                                    found++;
                                }
    
    return found;
}
/*getline: get line into s, return length */
int getline(char s[], int lim)
{
    int c, i;
    i=0;
    while(--lim >0 && ( c=getchar() ) != EOF && c!= '\n')
                s[i++] =c;
    
    if (c == '\n')
       s[i++] =c;
    s[i]='\0';
    return i;
}

/* strrindex: return index of rightmost occurence of t in s, -1 if none */
int strrindex( char s[], char t[])
{

    int i,j,k;
    int found=0;
    
    for(i = 0; s[i] != '\0'; i++){
           for(j=i, k=0; t[k] != '\0' && s[j]==t[k]; j++,k++)
                    ;
           if(k > 0 && t[k] == '\0'){
                found=i;
           }
    }

    if(found > 0)
             return found;
    else
        return -1;
}
        
                      
