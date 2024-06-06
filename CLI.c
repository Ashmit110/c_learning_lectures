#include <stdio.h>

int main(int argc, char const *argv[])
{

    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s <src_file> <dest_file>\n", argv[0]);
        return 1;
    }
    return 0;
}
