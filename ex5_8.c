#include <stdio.h>

static char *daytab[] ={
       {0,31,28,31,30,31,30,31,31,30,31,30,31},
       {0,31,29,31,30,31,30,31,31,30,31,30,31}
};

int day_of_year(int year, int month ,int day)
{
    int i, leap;
    
     
    leap = year%4 ==0 && year%100 ! =0 || year %400 ==0;
    if(month > 12 || day > *(daytab[leap]+month) )
             return -1;
             
    for(i=1;i< month; i++)
               day += *(daytab[leap] + i);
    return day;
    
}

int main()
{
    printf("Day is %d\n",day_of_year(2002,10,19) );
    
    return 0;
}
