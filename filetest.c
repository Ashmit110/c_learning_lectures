#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c=10;
    int *a=NULL;
    int *b=&c;
    if (((b=a)==NULL))
    {
        printf("yesss");
    }
    
    return 0;
}
