#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int i=257;
    printf("%p\n",&i);
    /*2000---------00000001
      2001---------00000001
      2002---------00000000
      2003---------00000000
      */
    char *ptr;
    ptr=(char *)&i;
    printf("%p\n",ptr);
    printf(" %d",i);
    printf(" %d",*ptr);
    return 0;
}
