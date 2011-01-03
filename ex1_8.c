#include <stdio.h>

/* K&R ex1_8: Counts number of blanks,tabs and newlines */


main()
{
      int c;
      int blanks, tabs, nlines;
      blanks=tabs=nlines =0;
      
      
      while( (c = getchar() ) != EOF ){
            if(c == ' ')
                   ++blanks;
            
            if(c == '\t')
                   ++tabs;
            
            if(c == '\n')
                   ++nlines;
      }
           
                      
      printf("\n Blanks:%d\n Tabs:%d\n Nlines:%d\n", blanks,tabs,nlines);
      
      }
