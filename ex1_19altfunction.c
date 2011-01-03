void reverse(char s[])
{
     int i,j;
     int temp;
     j=i=0;
     
     while(s[i] !='\0')
         ++i;
     
     i=i-1; /* to avoid copying '\0' to the first index */
     
     whlie( i > j){
            temp = s[i];
            s[i--] = s[j];
            s[j++] = temp;
     }
     
     
     
     return;
     
}
/*
void reverse(char s[])
{
     int i,j;
     char temp[MAXLINE];
     j=i=0;
     
     while(s[i] !='\0')
         ++i;
     
     
     while( (temp[j] = s[i-1])&& i>0){
                   --i;
                   ++j;
     }    
     
     temp[j]='\0';

     
     for(i=0;( s[i]=temp[i]) != '\0';++i)
                          ;
     s[i] = '\0';
     
     
     return;
     
}
*/
