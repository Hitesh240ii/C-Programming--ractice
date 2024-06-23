#include <stdio.h>
int main()
{
    int matrix[3][3];
    int transpose[3][3];

    for (int i = 0 ; i<3; i++)
    {
        for (int j= 0 ; j<3 ; j++)
        {
            printf("Enter The Element [%d][%d];",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    for ( int i = 0 ; i<3 ; i++)
    {
        for (int j = 0 ;  j<3 ; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transposed matrix is \n ");

    for ( int i = 0 ; i<3 ; i++)
    {
        for (int j= 0 ; j<3 ; j++)
        {
            printf(" %d",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;

}