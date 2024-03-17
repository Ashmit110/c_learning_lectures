#include <stdio.h>
#include <string.h>

int string_length(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int string_copy(char src[], char tgt[])
{
    int n = strlen(src);
    for (int i = 0; i < n; i++)
    {
        tgt[i] = src[i];
    }
    tgt[n] = '\0';
}

void string_concatenate(char s1[], char s2[])
{
    int i, n1, n2;
    n1 = strlen(s1);
    n2 = strlen(s2);

    for (i = 0; i < n2; i++)
    {
        s1[n1 + i] = s2[i];
    }

    s1[n1 + i] = '\0';
    printf("%s", s1);
}

void string_reverse(char str[])
{
    char ch;
    int i, n;
    n = strlen(str);
    for (int i = 0; i < n / 2; i++)
    {
        ch = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = ch;
    }
    printf("%s", str);
}

void find_substring(char str[], char s_str[])
{
    int l1 = strlen(str);
    int l2 = strlen(s_str);
    for (int i = 0; i < l1 - l2; i++)
    {
        if (str[i] == s_str[0])
        {
            for (int j = 0; j < l2; j++)
            {
                if (str[i + j] != s_str[j])
                {
                    break;
                }
            }
            printf("sub string is present from index %d to %d", i, i + l2 - 1);
        }
    }
}

void remove_consec_duplicate(char str[])
{
    int i;
    int j = 0;
    char str_temp[strlen(str)];
    str_temp[j] = str[0];
    for (i = 0; i < strlen(str); i++)
    {

        if (str_temp[j] != str[i + 1])
        {
            str_temp[++j] = str[i + 1];
        }
    }
    printf("%s", str_temp);
}
int main(int argc, char const *argv[])
{
    char str1[] = "ashmit rana";
    char str2[] = "abbccdde";
    remove_consec_duplicate(str2);

    return 0;
}
