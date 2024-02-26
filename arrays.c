#include<stdio.h>
int main(){
    // initialisation
    const int teamsize=11 ;
    int scores [teamsize]={23,12,34,0,57,39,5,3,2,10,0};
    int max=0;
    int i=0;
    for ( i = 0; i < teamsize; i++)
    {
        if (scores[i]>max)
        {
            max=scores[i];
        }
        

    }
    printf("%d",max);
    
    
return 0;
}
