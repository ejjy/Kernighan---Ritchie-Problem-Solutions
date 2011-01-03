#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "display.h"


void disp_message(const char *s, fnptr y)
{
     (*y)(s);
}
void disp_flash(const char *s)
{
   int i ,len = strlen(s); 
   char t[len];
   
   for(i=0 ; i < len ; i++)
           t[i] = ' ';
   t[i] = '\0';
   
   for(i=0; i < FLASH ; i++){
           printf("%s\r",s);
           fflush(NULL);
           sleep(1);
           printf("%s\r",t);
           fflush(NULL);
           sleep(SLEP);
   }
   printf("\n");
}

void disp_scroll(const char *s)
{
     int i, len = strlen(s);
     for(i=0; s[i]; i++){
              printf("%c%c", s[i], '\a');
		      fflush(NULL);
		      usleep(rand()%USLEP);
     }
     printf("\n");
}     
     
void disp_slate(const char *s)
{
     int i,j =0;
     while( j++ < SLATE){
            for(i=0; s[i]; i++){
                     printf("%c%c", s[i].'\a');
                     fflush(NULL);
                     usleep(rand()% USLEP);
            }
            for(i=0; s[i]; i++)
                     printf("%c",'\b');
                     fflush(NULL);
                     usleep(rand()%USLEP);
            }
            for(i=0; s[i]; i++)
                     printf("%c",' ');
                     fflush(NULL);
                     usleep(rand()%USLEP);
            }     
     }
     printf("\n");
}

void disp_houdin(const char *s)
{
     int i,j=0, len = strlen(s);
     char t[len];
        
     while(j++ < SLATE){
         for(i=0; i < j; i++)
                printf(" ");
          for(i=0; i < len; i++)
                t[i]='\b';
      
          t[i] ='\0';
          printf("%s",s);
          fflush(NULL);
          usleep(rand()%USLEP);
          printf("%s",t);

          for(i=0; t[i]; i++){
                printf("%c",' ');
                fflush(NULL);
                usleep(rand()%USLEP);
          }
     }
     printf("\n");
}


void disp_drag(const char *s);     
void disp_pyramid(const char *);
void disp_slate(const char *);
void disp_houdin(const char *);
     
