#include <stdio.h>
int num1;
int num2;


void Sum()
{
    printf("ENter first number:");
    scanf("%d",&num1);

    printf("Enter second number:");
    scanf("%d",&num2);

    printf("The sum of the given numbers is : %d",num1 + num2);
}


int main(void)
{
    Sum();
    return 0;
}