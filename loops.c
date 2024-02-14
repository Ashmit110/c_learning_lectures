#include <stdio.h>
 int main(int argc, char const *argv[])
 {
    int input;
    int count=0;
    printf("%d",input);
    while (input!=0)
    {
        printf("enter a non zero number");
        scanf("%d", &input);
        count++;
    }
    printf("you entered %d integers",count);
    return 0;
 }