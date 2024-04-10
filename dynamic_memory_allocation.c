#include <stdio.h>
#include <stdlib.h>


int main(){
    int *inputs=(int*)malloc(10*sizeof(int));
    printf("%p",sizeof(*inputs));

    return 0;
}