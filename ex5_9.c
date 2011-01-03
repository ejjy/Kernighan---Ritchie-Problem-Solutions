#include <stdio.h>
#include <stdlib.h>

static char daytab[][13] = {
        {0,31,28,31,30,31,30,31,31,30,31,30,31},
        {0,31,28,31,30,31,30,31,31,30,31,30,31}
};

static char *month_name[] = {
      "Invalid" ,"January","February","March","April","May","June","July",
       "August","September","October","November","December"
};
       
       
       
int day_of_year(int year, int month, int day)
{
    int i, leap;
    
    
    leap = year%4 == 0 && year%100 != 0 || year %400 ==0;
    char *p = &daytab[leap][1];
  
    if(month > 12 || month < 1 || day > daytab[leap][month])
             return -1;

    
    while(month-- > 1)
         day+= *p++;       
         
    return day;
} 

void month_day(int year, int yearday, int *pmonth, int *pday)
{
     int i, leap;
     
     
     leap = year%4 == 0 && year %100 != 0 || year %400 == 0;
     char *p = &daytab[leap][1];
     
     if((leap ==0 && yearday > 365) || (leap == 1 && yearday >366))
              pday = pmonth = NULL;
     

     for(*pmonth = 1, *pday = 0; yearday > *p ; p++){
                  
           yearday -= *p;
           (*pmonth)++;      
     }
     
     *pday = yearday;
     return;
}

int main( void)
{
    int year, month, day; 
    int *pmonth= (int *)malloc(sizeof(int)); 
    int *pday = (int *)malloc(sizeof(int));
        
    scanf("%4d",&year);
    scanf("%2d",&month);
    scanf("%2d",&day);
    
    
    printf("Yearday:\t%d\n",day_of_year(year,month,day));
    
    month_day(year,day_of_year(year,month,day),pmonth,pday);
    
    if(*pday == 2)
             printf("%dnd %s,%d\n",*pday,month_name[*pmonth],year);
    else if(pday)
        printf("%d%s %s,%d\n",*pday,(*pday == 1||*pday == 31)? "st": "th",
                     month_name[*pmonth],year);

    return 0;   
} 
