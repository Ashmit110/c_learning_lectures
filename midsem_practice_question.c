#include <stdio.h>

void printchars(char c, int n)
{
    if (n != 0)
    {
        printf(" %c ", c);
        printchars(c, n - 1);
    }
}

void triangle(int n)
{
    if (n != 0)
    {

        triangle(n - 1);
        printf("\n");
        printchars('*', n);
    }
}

/**
 * @brief Prints all positive factors of the given number
 *        one per line from the smallest to the largest.
 * Requires n > 0
 */

void print_factors(int n)
{
    if (n < 0)
    {
        printf("enter valid input \n");
        return;
    }
    void print_factors_helper(int current)
    {
        if (current > n)
        {
            return;
        }
        if (n % current == 0)
        {
            printf("%d \n", current);
        }
        print_factors_helper(current + 1);
    }
    print_factors_helper(1);
}

int is_prime(int n)
{
    int flag = 0;
    if (n < 0)
    {
        printf("invalid input");
        return -1;
    }
    void is_prime_helper(int factor)
    {
        if (n == factor)
        {
            return;
        }

        if (n % factor == 0)
        {
            flag = 1;
            return;
        }
        else
        {
            is_prime_helper(factor + 1);
        }
    }
    is_prime_helper(2);
    if (flag == 0)
    {
        printf("%d is prime number", n);
        return n;
    }
    else
    {
        return 0;
    }
}

int gcd(int m, int n)
{
    if (n == 0)
    {
        return m;
    }

    return gcd(n, m % n);
}

int hf_in_array(int arr[], int len)
{
    int f = 0;
    int num;
    for (int i = 0; i < len; i++)
    {
        int count = 0;
        for (int j = 0; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count >= f)
        {
            f = count;
            num = arr[i];
        }
    }
    return num;
}

void coprime_pairs(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (gcd(arr[i], arr[j]) == 1)
            {
                printf("%d %d \n", arr[i], arr[j]);
            }
        }
    }

    
}
int main(int argc, char const *argv[])
{
    int arr1[] = {2, 4, 5, 7, 6};
    coprime_pairs(arr1, 5);
    return 0;
}
