#include <stdio.h>
#include <string.h>
#define MAXLINE 30

int getline(char *s, int lim);
void reverse(char *);
void strncpy(char *, char *, int);

int main()
{
    char s[MAXLINE];
    char t[] = "In all ";
    getline(s,MAXLINE);
    reverse(s);
    //strncpy(s,t,5);
    printf("%s\n",s);
    return 0;    
    
}


void strncpy(char *s, char *t, int n)
{
     for(;n > 0;n--)
            *s++ =*t++;
     return;
}

int getline(char *s, int lim)
{
    int i =0,c;
    while((c =getchar())!= EOF && c != '\n')
     *(s+i++) =c;
    
    if( c =='\n')
        *(s+i++) = c;
    *(s+i) = '\0';
    return i;
}
     
void reverse(char *s)
{
     int i = strlen(s)-1,j =0;
     char temp;
     
     while(i > j){
               temp = *(s+j);
               *(s+ j++) = *(s+i);
               *(s+ i--)= temp;
     }
     
}
