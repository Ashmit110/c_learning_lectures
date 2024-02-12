#include <stdio.h>

int factorial(int n){
    if (n==1){
        return 1;
    }
    int result;
    result=factorial(n-1)*n;
    return result;
}

int sum_nn(int n){
    if (n==1){
        return 1;
    }
    int result;
    result=sum_nn(n-1)+n;
    return result;
}

int fibo(int n){
    if (n==1){
        return 0;
    }
    else if (n==2)
    {
        return 1+fibo(n-1);
    }
    
    int result;
    result=fibo(n-1)+fibo(n-2);

    return result;

}

int count_digit(int n){
    int num_digit;
    if ((n/10)==0){
        return 1;
    }
    num_digit=1+count_digit(n/10);
    return num_digit;


}
int test(){
    printf("hello");
    return 0;
}

int test2(){
    printf("hello");
    return 0;
}

int count_zero(int n){
    if (n<10)
    {
        return 0;
    }
    
    else if (n%10==0){
        return count_zero(n/10)+1;
    }
    else
    {
        return count_zero(n/10);
    }
    
    }

int m_to_power_n(int m,int n){
    if (n>0)
    {
        int result;

        result=m*m_to_power_n(m,n-1);
        return result;
    }
    return 1;
    
}

void decimal_to_binary(int n){
    if (n>0){
    
    decimal_to_binary(n/2);
    printf("%d",n%2); 
    }


}

void reverse_number(int m){
    if (m>0)
    {
        printf("%d",m%10);
        reverse_number(m/10);
    }
    
}

// 3,5 10, write a function make changes using least number of coins

int can_change(int n){
    int a;
    if (n<3)
    {
        return -1;  

    }
    if (n==3 ||n==5 ||n==10)
    {
        return 1;
    }
    a=can_change(n-10); if (a>0){return a+1;}
    a=can_change(n-5); if (a>0){return a+1;}
    a=can_change(n-3); if (a>0){return a+1;}


return a;
    
}
int sum_squares(int m,int n){
    // m<n
    int result;
    if (m!=n){
        
        result=sum_squares(m+1,n)+(m*m);
        return result;
    }
    return n*n;
}
// int gcd(int a, int b){ find greatest common divisor
//     int n=b;
//     if
// }

int main(int argc, char const *argv[])
{
    // int n;
    // scanf("%d",&n);
    printf("%d",can_change(15));
    return 0;
}

