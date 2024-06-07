#include <stdio.h>
int main (void)
{
    int num1;
    int num2;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    if(num1>num2)
    {
        printf("%d is smaller",num2);
    }
    else
    {
        printf("%d is smaller",num1);
    }
return 0;
}