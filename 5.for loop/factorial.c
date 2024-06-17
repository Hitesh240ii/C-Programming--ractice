#include <stdio.h>

int main(void)
{

    int i;
    int factorial=1;
    int num;


    printf("Enter the number:");
    scanf("%d",&num);

    if(num<0)
    {
        printf("Factorial cant be of negative integers");
    }
    else
    {
        for (i=1; i<=num ; i++)
        {
        factorial*=i;
        }
        printf("Factorial of %d is %d",num,factorial);
    }

}