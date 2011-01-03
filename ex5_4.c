#include <stdio.h>
#include <string.h>

int strend(char  *, char *);
int main()
{
    char s1[] = "I could do it again";
    char t[] ="ain";
    char s2[] ="Don't be again a daft gain man";
    char s3[] = " Daft in";
    char s4[] =" Don't do it AGain";
    char s5[] =" Don't do it againa";
    
    printf("S1,t:%d\n",strend(s1,t));
    printf("S2,t:%d\n",strend(s2,t));
    printf("S3,t:%d\n",strend(s3,t));
    printf("S4,t:%d\n",strend(s4,t));
    printf("S5,t:%d\n",strend(s5,t));
    return 0;
}

int strend(char *s, char *t)
{
    
    int lens = strlen(s);
    int lent = strlen(t);
    
    s += (lens>=lent)? lens-lent : 0;
    
    if(!strcmp(s,t))
        return 1;
    
    
    return 0;

}
