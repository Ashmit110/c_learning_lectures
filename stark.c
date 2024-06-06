#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
typedef struct
{
    char *name;
    bool alive;

} member_t;

int find_index(char *line, char c)
{
    for (int i = 0; i < strlen(line); i++)
    {
        if (*(line + i) == c)
        {
            return i;
        }
    }
    printf("couldnt find %c", c);
    exit(1);
}

void read_list(FILE *fp, member_t *list)
{
    const int MAX_LENGTH = 80;
    char line[MAX_LENGTH];
    int i = 0;
    while (fgets(line, MAX_LENGTH, fp) != NULL)
    {
        int comma_index = find_index(line, ',');
        (list+i)->name = (char *)calloc((comma_index + 1) , sizeof(char));
        (list+i)->alive = (bool *)calloc(1 , sizeof(bool));
        strncpy(list[i].name, line, comma_index);
        list[i].name[comma_index] = '\0';
        list[i].alive = line[comma_index + 2] == 'a';
        i++;
    }
    // printf("number entries in the list is %d \n",i);  
}

void kill_by_name(member_t list[], char *name)
{
    int i = 0;
    // printf("Test\n");
    while (list[i].name != NULL && strcmp(list[i].name, name) != 0)
    {
        
        
        i++;
    }
    // printf("\nkill by name loop ran %d times \n",i);
    
    if (list[i].name == NULL)
    {
        printf("name %s doesnt exist\n",name);
        exit(1);
    }
    else{
    list[i].alive = false;}
        
   
    
    
}

void fprint_list(FILE *fp, member_t list[])
{
    int i = 0;
    fprintf(fp, "%s, %s", list[i].name, list[i].alive ? "alive" : "dead");
    // printf("%c \n",list[i].name[0]);
    i++;
    while (list[i].name!=NULL)
    {
        // printf("%c \n",list[i].name[0]);
        
        fprintf(fp, "\n%s, %s", list[i].name, list[i].alive ? "alive" : "dead");
        ++i;
    }
}

void print_list(member_t list[]){
    fprint_list(stdout,list);
}

int main(int argc, char const *argv[])
{
    member_t *list=(member_t *)calloc(20,sizeof(member_t));
    // member_t list[20];
    char fname[] = "arya_list.txt";

    FILE *fp = fopen(fname, "r");
    if (fp)
    {
        read_list(fp, list);
    }
    fclose(fp);

    kill_by_name(list, "The Hound");
    // printf("Test3\n");
    fp = fopen(fname, "w");
    if (fp)
        fprint_list(fp, list);

    fclose(fp);

    print_list(list);

    free(list);

    return 0;
}
