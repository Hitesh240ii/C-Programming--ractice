#include <stdio.h>

int divisor(int num)
{
    int i;
    int sum=0;
    int dvsr;

    for (i=1 ; i<=num ; i++)
    {
        if (num%i==0)
        {
            sum = sum + i;
           
        }
    }
     printf("sum of divisor is %d",sum);
    return sum;
}

int main(void)
{
    int number;
    printf("Enter the number :");
    scanf("%d", &number);
    divisor(number);
    return 0;
}