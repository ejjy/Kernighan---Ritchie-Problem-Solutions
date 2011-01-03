/*K&R Ex4_13: Function reverse(s), a recursive version of reverse(s) of ex1_19. */



void reverse(char s[])
{
     int i=0;
     

     extern int j;
     extern char temp[MAXLINE];
     
     while(s[i] != '\0')
                ++i;
     
     if(i > 0){           
          temp[j++]=s[i];
          s[i] = '\0';
          reverse(s);
     }
     temp[j] = '\0';
     
     /* copy s onto itself in reverse order */
     while(s[i]=temp[i] != '\0')
                        ++i;
     
     return;
}
     
