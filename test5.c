#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_array(int * a,int len){
    for (int i = 0; i < len; i++)
    {
        printf("%d\n",*(a+i));
    }
    
}
int main(int argc, char const *argv[])
{
    char str[2][2][20]={
        {
            "cp is best",
            "i love cp"
        },
        {
            "feeling sad",
            "last class of cp"
        }
    };

    printf("%s \n",&str[1][1][9]);
    return 0;
}
