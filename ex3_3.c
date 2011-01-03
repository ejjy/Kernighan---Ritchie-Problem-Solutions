#include <stdio.h>
#include <ctype.h>
/*K&R Ex3_3: Function expand(s1,s2) expands shorthand notation like
a-z in the string s1 to the equivalent complete string in s2 */
#define MAX 1000

void expand(char[], char[]);


int main()
{
    char s1[] = {'a','c','d','-','t','3','4','6','-','9','3','-','A','-'};
    char s2[MAX];
    
    expand(s1,s2);
    
    printf("%s\n",s1);
    printf("%s\n",s2);
    
    return 0;
 
    
}


void expand(char s1[], char s2[])
{
     int i,j;
     char cx;
     // Copy leading '-'
     for(i=0, j=0 ; s1[i]=='-' ; i++)
              s2[j++]=s1[i];
     
     for(  ; i < MAX-1 && s1[i] != '\0';++i){
              if(s1[i] == '-' && s1[i+1] !='\0'){
                       //cx = s1[i-1];
                       if(islower(s1[i-1]) && islower(s1[i+1]) ){
                                           while( s1[i-1] < s1[i+1])
                                                          s2[j++] = ++s1[i-1] ;
                       }
                       else if( isupper(s1[i-1]) && isupper(s1[i+1]) ){
                                           while( s1[i-1]  < s1[i+1] )
                                                          s2[j++] = ++s1[i-1] ;
                       }
                       else if(isdigit(s1[i-1]) && isdigit(s1[i+1]) ){
                                           while( s1[i-1] <  s1[i+1])
                                                          s2[j++] = ++s1[i-1] ;
                       }
                       else   //mismatched
                           s2[j++] = s1[i];                                                           
              }              
              
              else
                  s2[j++] = s1[i];
              
              s2[j] = '\0';
}              
              
}
              
              
