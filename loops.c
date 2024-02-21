#include <stdio.h>
#include<math.h>

void palindrome(){
    printf("enter a number to check for palindrome");
    int n;
    scanf("\n %d",&n);
    int reversed=0;
    int orig=n;
    int ch=0;
    while (n>0){
        reversed=reversed*10+(n%10);
        printf("%d \n",reversed);
        
        n=n/10;
        if (reversed==orig)
        {
            printf("it is a palindrome number");
        }
        
    }
    printf("do you want to try another number ?");
    scanf("%d \n",&ch);
    return ch==1?palindrome():1;


    
}

int sum_ofEven_loops(int m,int n){
    int sum=0;
    while (m<=n)
    {
        if (m%2==0)
        {
            sum+=m;
        }
        m+=1;
        
    }
    return sum;
}

int sum_ofEven_recur(int m,int n){
    m=(m%2==0)?m:m+1;
    if (m<=n && m%2==0)
    {return sum_ofEven_recur(m+2,n)+m;}
    else{return 0;}   
}

int identify_prime(int number){

}

int n_fac_100(){
    int n_fac=1;
    int n=0;
    while (n_fac<=100)
    {
        n+=1;
        n_fac=n_fac*n;
    }
    return n;
    

}
 int main(int argc, char const *argv[])
 {
    // int input;
    // int count=0;
    // printf("%d",input);
    // while (input!=0)
    // {
    //     printf("enter a non zero number");
    //     scanf("%d", &input);
    //     count++;
    // }
    // printf("you entered %d integers",count);
    // return 0;
    // printf("%d",palindrome(12345));
    printf("%d",n_fac_100());
    return 0;
 }