#include <stdio.h>
#include <string.h>

void rev_str(char *s, char *ans)
{
    int n = strlen(s);
    for (int i = 0; i < (n/2)+1; ++i)
    {
        ans[i] = s[n - i - 1];
        ans[n - i - 1] = s[i];
    }
    ans[n] = '\0';
}

int main(int argc, char const *argv[])
{
    printf("%d %lf \n",5/2,5.2);
    char s1[6] = "exams";
    char s2[6] ;
    rev_str(s1,s2);
    printf("%s",s2);
    return 0;
}
