#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int date_check(int year, int month, int day);

char * month_name(int n)
{
     static char *name[] ={
            "illegal month",
            "January","February","March",
            "April","May","June",
            "July","August","September",
            "October","November","December"
     };
     return (n <1 || n >12)? name[0] : name[n];
}

int main()
{
    int date;
    int day,month,year;
    
    scanf("%i",&date);
        
    year = (int)floor(date/10000);
    month = (int)floor( (date%10000)/100 );
    day = date%100;
          
    if(date_check(year,month,day) == -1)
       printf("Invalid entry\n");                                       
    else if(day ==2)
       printf("%s %dnd %d\n",month_name(month),day,year);
    else   
       printf("%s %d%s %d\n",month_name(month),day,(day==1||day==31)?"st":"th",year);
    
    return 0;
}

 static char daytab[2][13] = {
       {0, 31, 28,31,30,31,30,31,31,30,31,30,31},
       {0, 31, 29,31,30,31,30,31,31,30,31,30,31}
    };

       
int date_check(int year, int month, int day)
{

    int i, leap;
    
    leap = year%4 ==0 && year%100 !=0 || year%400 ==0;
    
    if(month > 12 || day > daytab[leap][month])
             return -1;
    
    return 0;
    
}


