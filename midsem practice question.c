#include <stdio.h>

void printchars(char c, int n)
{
    if (n != 0)
    {
        printf(" %c ", c);
        printchars(c, n - 1);
    }
}

int main(int argc, char const *argv[])
{
    printchars("a",5);
    return 0;
}
