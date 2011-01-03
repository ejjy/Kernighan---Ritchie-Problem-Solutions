#include <stdio.h>
/* K&R ex2_4: squeeze(s1,s2) deletes each character in s1 that matches any character in s2 */


void squeeze(char s1[], char s2[])
{
     int i,j,k;
     
     for(i=0; s2[i] != '\n'; ++i)
              for(j=0,k=0; s1[j]!='\n';++j )
                       if (s1[j]!= s2[i])
                           s1[k++]= s1[j];


}
