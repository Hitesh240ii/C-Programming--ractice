
#include <stdio.h>
int num1,num2,num3;
void maxm(int num1,int num2,int num3)
{

    if (num1>num2 && num1 >num3)
    {
        printf("%d is greater",num1);
    }
    else if( num2> num3 && num2> num1)
    {
        printf("%d is greater",num2);
    }
    else if (num1== num2 && num2 ==num3)
    {
        printf("all numbers are equal");
    }
    else if ( num1== num2 || num2 == num3 || num1 == num3)
    {
        printf("two numbers are equal");
    }
    else
    {
        printf("%d is greater",num3);
    }
}

int main(void)
{
    printf("enter number 1:");
    scanf("%d",&num1);
    printf("enter number 2:");
    scanf("%d",&num2);
    printf("enter number 3:");
    scanf("%d",&num3);
    maxm(num1,num2,num3);
    return 0;
}