#include <stdio.h>

int main(void)
{
    int num;
    int i;
    int j;

    printf("enter the number of rows:");
    scanf("%d",&num);

    for(i=1; i<=num; i++)//outer loop for the number of rows -- number of rows = input from user
    {
        for (j = 1 ; j<=i ; j++)// inner loop for printing stars 
        {
            printf("*");
        }

        printf("\n");
        
    }
    return 0;

}