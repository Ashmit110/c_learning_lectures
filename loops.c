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
    palindrome();
    return 0;
 }