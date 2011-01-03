#include <stdio.h>
#include <string.h>
#include "example.h"

void qsort(void **v,int left, int right, Fp fp)
{
     int i, last;
     void swap(void *v[], int i, int j);
     
     if(left >= right)
             return;
     swap((void**)v, left, (left + right) /2);
     last =left;
     for( i = left+1; i <= right; i++)
          if((*fp)(v[i], v[left]) < 0)
                          swap((void**)v,++last,i);
          swap((void**) v,left, last);
          qsort(v, left, last-1, fp);
          qsort(v,last+1, right, fp);
                          
}
void swap(void *v[],int i, int j)
{
     void *temp;
     
     temp = v[i];
     v[i] = v[j];
     v[j] = temp;
}

     
