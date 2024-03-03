// 0 is the null character (last space is booked for null character)
#include <stdio.h>
#include <string.h>
void Print_array(char arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%c",arr[i]);
    }
    
}
void check_Z(){
    char s[21];
    while (1)
    {
        scanf("%s",s);
    if (s[0]=='Z'){
        break;
    }
    
    

    }



}

void string_concatenate(char s1[],char s2[]){
    int i,n1,n2;
    i=20;


    n1=strlen(s1);
    n2=strlen(s2);
    printf("%d\n %d\n",n1,n2);
    char str[n1+n2+1];
    for (int i = 0; i < n1+n2; i++)
    {
        if (i<n1)
        {
            str[i]=s1[i];
        }
        else
        {
            str[i]=s2[i-n1];
        }
    
    }
    printf("%d",i);
    str[n1+n2]='\0';
    printf("%s\n",str);
    // return str[];
    
}
int main(int argc, char const *argv[])
{
   string_concatenate("ashmit ","rana");
    return 0;
}
