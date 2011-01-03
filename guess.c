#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <signal.h> //signal()
#include <math.h>  //floor() function
#include "display.h" //header for disp_message()
//display.c contains functions for animating a string in different ways
#define EPSILON 0.5

void terminate(int );
int check_args(char *);

typedef void(* sighandler_t)(int);

//function to handle SIGINT signal
void terminate(int sig)
{
     if(sig == SIGINT)
            printf("\nThanks for playing\n");
     else if(sig == SIGABRT)
            printf("\nUsage is guess [-l\-u\-lu] [INT] [INT(optional)]\n");

     raise(SIGTERM);
}

int main(int argc, char *argv[])
{
    int number_of_guesses = 0;
    double secret, guess;
    int lower = 0, upper = 100;
    char *lowerc, *upperc;
    
    signal(SIGINT,(sighandler_t)&terminate);
    signal(SIGABRT,(sighandler_t)&terminate);
    
    //No. 1. Parse command-line arguments
    if(argc > 1){
            if(argc == 2)
                    raise(SIGABRT);
            switch(*argv[1]){
            case "-l":
                 lower = check_arg(argv[2]);
                 break;
            case "-u":
                 upper = check_arg(argv[2]);
                 break;
            case "-lu":
                 lower = check_arg(argv[2]);
                 upper = check_arg(argv[3]);
                 break;
            case default:
                 printf("Invalid Option\n");
                 break;
            }
    }
    
    sprintf(lowerc,"%d%",lower);
    sprintf(upperc,"%d",upper);
    time_t seed = time(NULL); 
    //srand(seed);
    
    secret = rand()%100 /100; //floating point part
    secret += rand() % upper) + lower ; //integer part
    
    disp_message("Welcome to the number guessing game!",disp_scroll);
    disp_message("I've thought of a number between ",disp_scroll);
    disp_message(lowerc,disp_slate);
    disp_message(" And ",disp_scroll)
    disp_message(upperc,disp_slate);  
    
    while(1){
             if(scanf("%g",&guess) == EOF)
                 continue;
                 
             number_of_guesses++;
             
             //if guess is an int, make secret an int
             if((guess - floor(guess)) == 0 )
                      secret = (int)secret;
             
             if( (guess - secret) < EPSILON){
                 disp_message("CONGRATS!",disp_houdin);
                 printf("\nIt only took you %d guess%s!\n",number_of_guesses,
                     (number_of_guesses==1)?"" : "es");
                 break;
             }
             
             printf("Too %s\n",(guess > secret)? "high" : "low");
             disp_message("Guess Again",disp_flash);
    }    


return 0;
}

//function converts string 'arg' to an int if it legitmately
//represents a number otherwise it raises an error signal.
//The standard lib function atoi() returns 0 even if string
//is not a number so it is not useful here.
int check_arg(char *arg)
{
    char c;
    int val;
    int len = strlen(arg);
        
    //convert integer part
    for(val = 0.0 ; isdigit(*arg) && len-- > 0 ; arg++)
            val = 10.0 * val +( *arg - '0');
    if(!isdigit(*arg) )
            raise(SIGABRT);
     
    return val;
}
