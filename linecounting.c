#include <stdio.h>
/* K&R Exercise 1-8: Write a program to count blanks,tabs, and newlines */


main()
{
      int c,nl,tab,blk;
      
      nl,tab,blk =0;
      while ( (c=getchar()) != EOF){
            if (c == '\n')
               ++nl;
            if (c == '\t')
               ++tab;   
               }
      printf("%d\t %d\n",nl,tab);
      
}
