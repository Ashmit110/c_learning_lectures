#include <stdio.h>

typedef enum
{
    mon = 1,
    tue,
    wed,
    thu,
    fri,
    sat,
    sun
} day;

day tom(day d){
    return d+1;
}
int main(int argc, char const *argv[])
{
    day d = sat - 1;
    printf("tom is %d",sizeof(d));
    if (d < sat)
    {
        printf("its not weekend");
    }
    if (d < sat)
        printf("%d days to weekend!\n"
,      sat - d);
    return 0;
}
