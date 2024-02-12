#include <stdio.h>

void capitalize( char alphabet){
    printf("%c",alphabet-32);
    return;
}
int main(int argc, char const *argv[]){
    
    char ch,u_ch;
    scanf("%c",&ch);
    capitalize(ch);
    return 0;
}

