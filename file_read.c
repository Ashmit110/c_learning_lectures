#include <stdio.h>
#include <stdlib.h>

char ** words(FILE*fp,int n){
    char **n_words=(char **)calloc(n,sizeof(char*));
    char temp[81];
    for (int i = 0; i < n; i++)
    {
        printf("%d",i);
        
        char * word=(char *)malloc(81*sizeof(char));
        fgets(word,81,fp);
        n_words[i]=word;
    }
    return n_words;
    
}
int main(int argc, char const *argv[])
{
    char *filename="ramayan.txt";
    FILE *fp=fopen(filename,"r");
    char ** words_out=words(fp,5);
    int i=0;
    while (words_out[i]!=NULL)
    {
        printf("%s \n",words_out[i]);
        i++;
    }
    
    

    
    
    
    return 0;
}
