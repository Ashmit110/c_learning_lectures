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

// int gcd(int a, int b){ find greatest common divisor
//     int n=b;
//     if
// }

int main(int argc, char const *argv[])
{
    // int n;
    // scanf("%d",&n);
    printf("%d",m_to_power_n(5,3));
    return 0;
}

