#include <stdio.h>
/* K&R ex 5_3: strend(s,t) returns 1 if t occurs at end of s, 
zero otherwise */

int strend(char *, char *);


int strend(char *s, char *t)
{
    static int i;
    
    if(*s =='\0' && *t=='\0')
          return 1;       
    while(*s++ != *t)
               ;
               
    while(*s++ == *t){
               ++i;
               ++t;
               strend(s,t);
    }
             
    
    return 0;      
}


int main()
{
    char s1[] = " I could";
    char t1[] = "uld";
    char s2[] = " I should go";
    char t2[] = "oulder";
    char s3[] = "give cold shoulder";
    
        
    printf("%d\n",strend(s1,t1) );
    printf("%d\n",strend(s2,t1) );
    printf("%d\n",strend(s1,t2) );
    printf("%d\n",strend(s3,t2) );
    
    return 0;
}
