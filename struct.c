#include <stdio.h>

typedef struct
{
    char name[20];
    // char country_code[4];
    int runs;

} batsman_t;

void report_century(batsman_t b)
{
    printf("%s %s a century\n", b.name,
           b.runs >= 100 ? "scored" : "did not score");
}

void report_highest_scorer(batsman_t b[], int length)
{
    int high_score = 0;
    int index;
    for (int i = 0; i < length; i++)
    {
        if (high_score < b[i].runs)
        {
            high_score = b[i].runs;
            index=i;
        }
    }
    printf("%s scored %d",b[index].name, b[index].runs);
}

int main(int argc, char const *argv[])
{

    const int team_size = 4;
    batsman_t india[team_size];
    for (int i = 0; i < team_size; i++)
    {
        printf("enter players data \n");
        scanf("%s %d",
              india[i].name, &india[i].runs);
    }

    report_highest_scorer(india,team_size);
    // report_century(india[0]);
    // report_century(india[1]);
}
