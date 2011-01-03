#include <stdio.h>
#include <string.h>

void shellsort(int v[], int n);
void insertionSort(int a[], int length); 
void insert( int a[], int length, int value);
int count;

int main()
{
    count=0;
    
    int i;
    int v[] ={13,14,94,33,82,25,59,94,65,23,45,27,73,25,39,10,76};
    int s[] ={13,14,94,33,82,25,59,94,65,23,45,27,73,25,39,10,76};
    
    i= sizeof(v)/sizeof(v[0]);
    shellsort(v,i);
    
    
    printf("%d\n",count);
    
    count=0;
    insertionSort(s,i);
    printf("%d\n",count);
    return 0;

}
void shellsort(int v[], int n)
{
    int gap,i ,j, temp; 
    count=0;
    
    
    for(gap =n/2;gap>0;gap/=2)
            for(i=gap; i< n; i++)
                       for(j=i-gap;  j>=0 && v[j]>v[j+gap] &&(count++)>=0 ;j-=gap){
                                    temp = v[j];
                                    v[j] =v[j+gap];
                                    v[j+gap]=temp;
                       }
 
}
    
    

void insert( int a[], int length, int value) 
{
        
     int i = length - 1;
     while (i >= 0&& (count++) && a[i] > value) {
         a[i + 1] = a[i];
         i--;
     }
         
     a[i + 1] = value;
 }
 
void insertionSort(int a[], int length) 
 {
     int i;
     for (i = 1; i < length; i++) 
         insert(a, i, a[i]);
 }


