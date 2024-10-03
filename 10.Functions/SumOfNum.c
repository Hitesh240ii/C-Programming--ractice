#include <stdio.h>
int num1;
int number2;


void Sum()
{
    printf("ENter first number:");
    scanf("%d",&num1);


    printf("Enter second number:");
    scanf("%d",&number2);

    printf("The sum of the given numbers is : %d",num1 + number2);
}


int main(void)
{
    Sum();
    return 0;
}