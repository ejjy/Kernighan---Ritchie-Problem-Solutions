#include <stdio.h>

/*K&R ex4_13: Program uses recursive function 'reverse(s,left,right)' to reverse input 
one line at a time */


#define MAXLINE 1000

int getline(char s[]);
void reverse(char s[],int left, int right);
void swap(char s[], int i, int j);




void reverse(char s[],int left, int right)
{
  
     if(right > left){
              swap(s,left,right);
              reverse(s,++left,--right);
     }
     
     return;     
}
void swap(char s[],int i, int j)
{
     int temp;
     
     temp = s[i];
     s[i] = s[j];
     s[j] = temp;
         
     return;
}


/* Ff lines of code same as in book except for reverse() function call in main */

int main()
{
    int len;
    char line[MAXLINE];
    
    while( (len=getline(line)) >0){
           reverse(line,0,len-1);
           printf("%s\n",line);
    }
    return 0;
} 


/* Gets input line */   
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
