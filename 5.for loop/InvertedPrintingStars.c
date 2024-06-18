#include <stdio.h>

int main(void)
{
    int i,j;
    int num;

    printf("enter the number of rows:");
    scanf("%d",&num);

    for (i=num ; i>=1 ; i--) //for the decreasing pattern -- is used and equated to num
    {
        for (j=1 ; j<=i ; j++) //for the star pattern
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;

}