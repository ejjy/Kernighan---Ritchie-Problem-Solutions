#include<stdio.h>
#define MAXVAL 100
/* K&R ex4_4: adds commands to print top of stack without popping, to duplicate
 top of stack, to swap top two values, and a command to clear the stack */

int sp =0;
double val[MAXVAL];

void push(double f)
{
     if (sp < MAXVAL)
        val[sp++] =f;
     else
         printf("error: stack full, can't push %g\n",f);
         
}

double pop(void)
{
       if(sp >0)
             return val[sp--];
       else{
            printf("error: stack empty\n");
            return 0.0;
       }
}

void print_top(void)
{
  (sp>0)? printf("%g\n", val[sp-1]): printf("Stack is empty\n");
}

void duplicate(void)
{
     push(val[sp-1]);
     
}

void swap_top(void)
{
     double temp1 = pop();
     double temp2 = pop()
     push(temp1);
     push(temp2);
}
void clear_stack(void)
{
     while(sp>0) pop();  //or sp =0;
}
