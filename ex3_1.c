#include <stdio.h>
#include <string.h>
#include <time.h>

/*K&R Ex3_1: Binary search that makes one test inside the loop
at price of more tests outside the loop */
#define MAX 100

int binsearch(int x, int v[],int n);
int getarray( int v[]);

int binsearch(int x, int v[],int n)
{
    int low;
    int mid;
    int high;
    
    low=0; 
    high =n-1; 

    
    while( (x - v[mid =(low + high)/2]) && low <= high){
            if(x < v[mid])
                 high = mid - 1;
            else
                low = mid + 1;
          
    }
    
     if( (x - v[mid])) 
      return -1; 
     else 
      return mid;
    
}
int main()
{
    clock_t start;
    clock_t end;
    int v[MAX]; 
    int x = 8;
    int u[] ={1,2,4,5,6,7,8,9,11};
    size_t n = sizeof(u);
    
    
    start = clock();
    /*getarray(v);*/
    
    printf("pos:\t%d\n",binsearch(x,u,n));
    
    end = clock();
    printf("runtime:\t%.2f\n",(double)(end-start));
    
    return 0;
}
int getarray( int v[])
{
    int i,c;
    i=0;
    
    while(i < MAX-1 && (c=getchar()) != EOF)
           v[i++] = c -'0';
           
    v[i] = '\0';
    
    return i;
    
}
