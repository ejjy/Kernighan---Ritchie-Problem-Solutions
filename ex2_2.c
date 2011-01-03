#define <stdio.h>

/*K&R ex2_2: write loop equivalent to FOR loop on page 41 without using && or || */

#define LIM 1000

int main()
{
      int i,c;
      char s[LIM];
      
      for(i=0; i<LIM-1; ++i){
               if ((c=getchar() )== '\n')
                  break;
               else if(c == EOF)
                    break;
               else
                   s[i]=c;
      }
      
      
      
                  
 
 return 0;
}
