#include <stdio.h>

/*K&R ex1_19: Program uses function 'reverse(s)' to reverse input one line at a time */

#define MAXLINE 1000

int getline(char s[]);
void reverse(char s[]);

void reverse(char s[])
{
     int i,j;
     int temp;
     j=i=0;
     
     while(s[i] !='\0')   /* determine length of string*/
         ++i;

     if(i > 0)    
          i=i-1; /* to avoid copying '\0' to the first index */
     
     while( j < i ){
            temp = s[i];
            s[i--] = s[j];
            s[j++] = temp;
     }
     return;
}

int main()
{
    int len;
    char line[MAXLINE];
    
    while( (len=getline(line)) >0){
           reverse(line);
           printf("%s\n",line);
    }
    return 0;
} 
   
int getline(char s[])
{
    int c,i;
    
    i=0;
    while( (c=getchar()) != EOF && c != '\n' && i < MAXLINE-1){
           s[i]=c;
           ++i;
    }
    s[i]='\0';
    
    return i;
}




