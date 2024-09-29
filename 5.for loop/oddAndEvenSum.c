#include <stdio.h>
int main(void)
{
    int num;
    int sum=0;

    printf("enter the number:");
    scanf("%d",&num);

    for (int i=0; i<=num ; i++)
    {
        if ( i%3==0 && i%5==0)
        {
            sum = sum+i;
        }
    }
    printf("sum = %d\n", sum);

    return 0;
}