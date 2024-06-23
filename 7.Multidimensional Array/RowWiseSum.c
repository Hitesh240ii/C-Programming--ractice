#include <stdio.h>

int main(void)
{
    int matrix[2][3];
    int i;

    for (int i= 0 ; i<2 ; i++)
    {
        for (int j=0 ; j<3 ; j++)
        {
            printf("Enter the element in the matrix in position [%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    for (i=0 ; i<2 ;i++)
    {
        int sum =0;
        for(int j=0 ; j<3 ; j++)
        {
            sum += matrix[i][j];
        }
        printf("Sum Of row %d is %d\n",i ,sum);
    }

    return 0;

}