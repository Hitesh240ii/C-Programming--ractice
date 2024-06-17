#include <stdio.h>

int main(void)
{


    int num;
    int i;
    int sum;

    printf("enter the number");
    scanf("%d",&num);

    for (i=0 ; i<= num ; i++)
    {
        sum += i*i;
    }

    printf(" sum of first %d natural numbers is %d", num , sum);

    return 0;
}