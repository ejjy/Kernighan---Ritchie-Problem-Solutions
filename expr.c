#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXVAL 100
/* K&R ex5_10: evaluates a reverse Polish expression from the command line
*/
double pop(void);
void push(double );

int main(int argc, char *argv[])
{
    int  i; char c;
    double op2;
    
    printf("%c\n",argv[3][0]);//debug
    while(--argc > 0){
                
        while(isdigit(c = (*++argv)[0])&& --argc > 0)
              push((double)(c -'0') );
                         
        switch(c){
        case '+':
             push(pop() + pop());
             break;
        case '-':
             op2 = pop();
             push(pop() - op2);
             break;    
        case '*':
             push(pop() * pop() );
             break;
        case '/':
             op2 =pop();
             if(op2)
                 push(pop()/op2);
             else
                 printf("Division by 0\n");
             break;
        default:
               printf("error: Invalid arguments");
               argc =0;
               break;
        }
        
    }
    printf("%g\n",pop());
}
int stack_index=0;
double val[MAXVAL];
void push(double f)
{
     if(stack_index < MAXVAL)
           val[stack_index++] =f; 
     else
         printf("error:stack is full, can't push %g \n",f);
}

double pop(void)
{
       if(stack_index > 0)
             return val[--stack_index];
       else {
            printf("error: stack empty\n");
            return 0.0;
       }
}
