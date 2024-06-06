#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
{
    int numerator;
    int denominator;
} rational;

void fuc1(rational *orig)
{
    int num = (orig->numerator);
    int dem = (orig->denominator);
    int i = 0;
    int factor = 0;
    while (((num > dem) && i <= dem) || ((dem > num) && i < +num))
    {
        i++;
        if ((num % i == 0) && (dem % i == 0))
        {
            factor = i;
        }
    }
    orig->numerator = num / factor;
    orig->denominator = dem / factor;
}

int count
int main()
{
    int n = 153, k = 3;
    printf("%d\n", pow(1,3));

    return 0;
}
