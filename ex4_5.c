#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calc.h"
#define MAXOP 100


/* K&R Ex4_3:  Extends reverse polish calculator to add modulus operator and
provisions for negative numbers */
int main()
{
      int type, n;
      double op2,op1,isint;
      char s[MAXOP];
      
      while((type = getop(s)) != EOF){
                  switch(type) {
                  case NUMBER:
                       push(atof(s));
                       break;
                  case '+':
                       push(pop() + pop());
                       break;
                  case '*':
                       push(pop() * pop());
                       break;
                  case '-':
                       op2 = pop();
                       push(pop() - op2) ;
                       break;
                  case '/':
                       op2 = pop();
                       if (op2 != 0.0)
                          push(pop() / op2);
                       else
                           printf("error: zero divisor \n");
                       break;
                  case '%':
                       op2 = pop();
                       op1 = pop();
                       isint = op2 - floor(op2) + op1 - floor(op1);
                       if (op2 != 0.0 && isint ==0)
                          push((int)op1 %(int)op2);
                       else
                           printf("illegal operands in % \n");
                       break;
                  case '?':
                       print_top();
                       break;
                  case '#':
                       duplicate();
                       break;
                  case '~':
                       swap_top();
                       break;
                  case '!':
                       clear_stack();
                  case '\n':
                       printf("\t%g\n",pop());
                       break;
                 
                  default:
                          if( (n = getmath(type))!= -1)
                                   lib_function(n);
                          else
                              printf("error: unknown commmand %s\n",s);
                          break;
                  }
      }
      return 0;
}

void lib_function(int n)
{
    double op2;
    switch(n){
    case 0:
         push(sin(pop()) );
         break;
    case 1:
         push(cos(pop()) );
         break;
    case 2:
         op2 = pop();
         if(op2 >=0)
             push(sqrt(op2));
         else
             printf("error: square root of a negative number\n");
         break;
    case 3:
         push( ceil(pop()) );
         break;
    case 4:
         push (floor(pop()));
         break;
    case '\n':
         printf("\t%g\n",pop());
         break;
    default:
           printf("error: undefined library function\n");
           break;
    }
}
