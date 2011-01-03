#include <stdio.h>

/* K&R ex1_16: Reads lines of input of arbitrary length. Prints length of line and
as much as possible of the text */
/* Program does not count the length of tabs */

#define MAXLINE 200



int getline(char line[],int maxline);
void copy(char to[], char from[]);

int main()
{
      int len,iterate;
      int max, prevlen;
      char line[MAXLINE];
      char longest[MAXLINE];
      char templine[MAXLINE];
      
      max=prevlen=iterate=0;
        
      while( (len = getline(line, MAXLINE) )> 0){
             if(iterate == 0){    /*First take  */
                 copy(templine,line);
                 
             }

             if(len < MAXLINE-1){
                    if(max < len + prevlen){
                           max = len + prevlen;
                           copy(longest,templine);
                    }
                    prevlen=0;
                    iterate = 0;
             }
             else{
                    iterate = 1;
                    prevlen += len;
                    
             }
      }
      if(max >0)
             printf("%s\n length:%d\n",longest,max);
      
      return 0;
             
          
}


int getline(char s[], int maxline)
{
    int c, i;
    
    for(i=0; i< maxline-1 && (c=getchar()) != EOF && c != '\n'; ++i)
             s[i] = c;
    if (c=='\n'){
              s[i]=c;
              ++i;
    }
    
    s[i]='\0';

    return i;
}   
       
void copy(char to[],char from[])
{
     int i;
     
     i=0;
     while((to[i] = from[i]) !='\0')
                  ++i;
}
   
              
      


