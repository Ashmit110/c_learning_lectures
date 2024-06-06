#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    
    char *src="ramayan.txt";
    char *dst="ramayan_write.txt";
    FILE *src_fp, *dst_fp;
    
    if (!(src_fp = fopen(src, "r")))
    {
        printf("%s : No such file or dirctory file name:");
        return -1;
    }
    
    if (!(dst_fp = fopen(dst, "w")))
    {
        printf("Cannot open %s for writing\n\n", dst);
        return -2;
    }
    int count = 0;
    int c = fgetc(src_fp);
    while (c != EOF)
    {
    fputc(c, dst_fp);
    c = fgetc(src_fp);
    ++count;
    }
    fclose(src_fp);
    fclose(dst_fp);

    printf(" \nCopied file %s to file %s (%d characters)\n " ,src, dst, count);
        return 0;
}
