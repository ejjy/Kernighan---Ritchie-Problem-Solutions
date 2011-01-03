#define ALLOCSIZE 1000
static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

char *alloc(int)
{
     if (allocbuf+ ALLOCSIZE - allocp >=n) {
                   allocp +=n;
                   return allocp-n;
     } else
           return 0;
}  
