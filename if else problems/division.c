#include <stdio.h>
int main(void)
{
    int num1;
    int num2;
    printf ("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    if(num2==0)
    {
        printf("second number is 0 ");

    }
    else
    {
        printf("%d is answer of divison",num1/num2);
    }
return 0;
}