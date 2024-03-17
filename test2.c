#include <stdio.h>
#include <stdbool.h>

bool is_sum_digit_even(int n)
{
    if (n < 9)
    {
        return !(n % 2);
    }

    if (is_sum_digit_even(n / 10) == is_sum_digit_even(n % 10))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(int argc, char const *argv[])
{
    printf("%d", is_sum_digit_even(125));
    return 0;
}
