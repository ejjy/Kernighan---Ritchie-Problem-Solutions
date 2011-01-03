#include <stdio.h>
/* K&R ex3_2: Function escape(s,t) copies string t to s and uses SWITCH to convert
characters like tab and newline into visible escape sequences.
Function unescape(s,t) does the reverse */
#define MAXLNTH  40

void escape(char s[], char t[]);
void unescape(char s[], char t[]); 

int main()
{
    
    char s[MAXLNTH];
    char t[]="Rumpole\b \t th\\e Baily\n";
    char v[MAXLNTH];
    
    escape(s,t);
    printf("%s\n",t);
    printf("%s\n",s);

    unescape(s,v);
    printf("%s\n",v);


    
    return 0;
}

void escape(char s[], char t[])
{
    int i=0,j =0;
    
    while(t[j] != '\0'){
               switch(t[j]){
               case '\n':
                    s[i++]='\\';
                    s[i++]='n';
                    ++j;
                    break;
               case '\t':
                    s[i++]='\\';
                    s[i++]='t';
                    ++j;
                    break;
               case '\b':
                    s[i++]='\\';
                    s[i++]='b';
                    ++j;
                    break;
               case '\v':
                    s[i++]='\\';
                    s[i++]='v';
                    ++j;
                    break;
               case '\r':
                    s[i++]='\\';
                    s[i++]='r';
                    ++j;
                    break;
               case '\f':
                    s[i++]='\\';
                    s[i++]='f';
                    ++j;
                    break;
               case '\a':
                    s[i++]='\\';
                    s[i++]='a';
                    ++j;
                    break;
               case '\\':
                    s[i++]='\\';
                    s[i++]='\\';
                    ++j;
                    break;
               case '\?':
                    s[i++]='\\';
                    s[i++]='\?';
                    ++j;
                    break;
               case '\'':
                    s[i++]='\\';
                    s[i++]='\'';
                    ++j;
                    break;
               case '\"':
                    s[i++]='\\';
                    s[i++]='\"';
                    ++j;
                    break;
               case '\0':
                    s[i++]='\\';
                    s[i++]='0';
                    ++j;
                    break;
               default:
                       s[i++]=t[j++];
                       break;
               }  
    }
    s[i]='\0';

    
}               
void unescape(char s[], char t[])
{
     int i=0,j=0;
     
     while(s[j] != '\0'){
                if(s[j] == '\\'){
                        j++;
                        switch(s[j]){
                        case 'n':
                             t[i++]='\n';
                             break;
                        case 't':
                             t[i++]='\t';
                             break;    
                        case 'b':
                             t[i++]='\b';
                             break;                        
                        case 'v':
                             t[i++]='\v';
                             break;
                         case 'r':
                             t[i++]='\r';
                             break;  
                         case 'f':
                             t[i++]='\f';
                             break;  
                         case 'a':
                             t[i++]='\a';
                             break;
                         case '\\':
                             t[i++]='\\';
                             break;
                         case '\?':
                             t[i++]='\?';
                             break;
                         case '\'':
                             t[i++]='\'';
                             break;
                         case '\"':
                             t[i++]='\"';
                             break;
                         case '\0':
                              t[i++]='\0';
                              break;
                        default:
                                 t[i++] = s[--j];
                                 break;
                         }
                         j++;
                }
                else{
                     t[i++]=s[j++];
                     
                     }
     }
     t[i] ='\0';     
}                 
                              
              
                      
