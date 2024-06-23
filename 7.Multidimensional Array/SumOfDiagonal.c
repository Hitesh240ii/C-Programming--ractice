#include <stdio.h>

int main()
{
    int matrix [4][4];
    int i,j;

    for (i=0 ; i<4 ; i++)
    {
        for (j=0 ; j<4 ; j++)
        {
            printf("Enter The Element at position [%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    int DiagonalSum = 0;
    for(i=0 ; i<4 ; i++)
    {
        DiagonalSum += matrix[i][i];
    }
    
    printf("Sum of main diagonal is %d",DiagonalSum);

    return 0;
}
