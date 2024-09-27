#include <stdio.h>
int main(void)
{
    int num ,i ;
    int sum=0;

    printf("Enter the Number :");
    scanf("%d", &num);

    for (i = 1; i <= num ; i++)
    {
        sum = sum+i;
    }

    printf("The sum is %d", sum);


    return 0;
}