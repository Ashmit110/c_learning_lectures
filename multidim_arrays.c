#include <stdio.h>
#include <stdlib.h>

void display_matrix(int **m, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}
int **alloc_matrix(int rows, int columns)
{
    int **m = calloc(rows, sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        m[i] = calloc(columns, sizeof(int));
    }
    return m;
}
void release_matrix(int ** m,int rows){
    for (int i = 0; i < rows; i++)
    {
        free(m[i]); 
    }
    free(m);
}
int main(int argc, char const *argv[])
{
    int row=3;
    int col=3;
    #ifdef ROW
    row=ROW;
    #endif
    
    #ifdef COL
    col=COL;
    #endif


    int **m1 = alloc_matrix(row, col);
    int k = 1;
    for (int r = 0; r < row; ++r)
    {
        for (int c = 0; c < col; ++c)
        {
            m1[r][c] = k++;
        }
    }
    
    display_matrix(m1,row,col);
    
    release_matrix(m1,row);
    return 0;
}
