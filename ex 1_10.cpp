#include <stdio.h>

/* K&R Exercise 1-10: Program copies input to its output, replacing a tab with \t, a backspace */
/* with \b, and each backslash with \\ */

main()
{
      int c;
      
      while( (c=getchar()) != EOF){
             if(c=='\t'){
                        putchar('\\');
                        putchar('t');
                        }
             if(c=='\b'){
                        putchar('\\');
                        putchar('b');
                        }
             if(c=='\\'){
                        putchar('\\');
                        putchar('\\');
                        }          
             if(c != '\t' || c != '\b' || c!= '\\')
                  putchar(c);   
             }      
             
}
    
