#include <stdio.h>
#define SIZE 11

int main(void)
{
    int i,j;
    int mat[SIZE][SIZE];

    //step 1 to fill values in tabble
    for( i=0 ; i<SIZE ; i++)
    {
        for (j=0 ; j<SIZE ; j++)
        {
            mat[i][j]=i*j;
        }
    }
    
    //step 2 printing table

    for (i=1 ; i<SIZE ; i++)
    {
        for (j=1 ; j<SIZE ; j++)
        {
            printf("%5d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}