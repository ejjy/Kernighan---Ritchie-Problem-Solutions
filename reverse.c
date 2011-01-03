#include <stdio.h>
#include <string.h>

/*reverse(void **s,int len) takes array s of length len and reverses it */

void reverse(void **s, int len)
{
     int i = 0, j = len-1;
     void *temp;
     while( i < j ){
          temp = *(s + i);
          *(s + i++) = *(s + j);
          *(s + j--) = temp ;
     }
     return;
}
          
     
