#include <stdio.h>

int x=-1,y=-2,z=-3;
void f1(int x,int z){
    y=++x +--z +(y+=2);
    printf("%d %d %d\n",x,y,z);
}
int main(int argc, char const *argv[])
{
    int z=3;
    x+=y+=++z;
    printf("%d %d %d\n",x,y,z);
    f1(x,z);
    {
        float y=4.0;
        int x=0;
        x+=z=5*y;
        printf("%d %.2f %d \n",x,y,z);
    
    }
    printf("%d %d %d\n",x,y,z);
    fflus
    return 0;
    }


    

