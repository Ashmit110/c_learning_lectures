#include <stdio.h>
double calculate_interest(double p,int i,double r){
    
    double total_interest;
    total_interest=p*r*i;
    return total_interest;
}

int main(){
    double p;int i;double r;
    scanf("%lf",&p);
    scanf("%d",&i);
    scanf("%lf",&r);
    printf("total interest rate120 %0.2lf\n",calculate_interest(p,i,r));
    return 0;
}

