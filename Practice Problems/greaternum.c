#include <stdio.h>
int main(void)
{
    int num1;
    int num2;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    if (num1>num2)
    {
        printf("%d is greater",num1);
    }
    else
    {
        printf("%d is greater",num2);
    }
return 0;

}
