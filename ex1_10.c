#include <stdio.h>

/* K&R Exercise 1-10: Program copies input to its output, replacing a tab with \t, a backspace */
/* with \b, and each backslash with \\ */

int main()
{
      int c;
      int d =0;
      
      while( (c=getchar()) != EOF){
                      
                      if(c == '\t'){
                           putchar('\\');
                           putchar('t');
                           d=1;
                           }
                           
                      if(c == '\b'){
                           putchar('\\');
                           putchar('b');
                           d=0;
                           }
                           
                      if(c == '\\'){
                           putchar('\\');
                           putchar('\\');
                           d=0;
                           }
                      if(c != '\t' && c != '\b' && c != '\\'){
                           putchar(c);
                           d=0;
                           }
                           
                           
                                    }
      return 0;
      }
