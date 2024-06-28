#include <stdio.h>

int num;
void isEven(int num)
{
    printf("enter a number:");
    scanf("%d",&num);

    if (num==0 || num%2==0)
    {
        printf(" %d is even", num);
    }
    else
    {
        printf(" %d is odd",num);
    }
}

int main(void)
{
    isEven(num);
    return 0;
}