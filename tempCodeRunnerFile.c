#include <stdio.h>

int main(int argc, char const *argv[]){
    
    double radius=10;
    printf("%lf %lf",radius,3.14*(radius++)*(radius++));
    return 0;
}