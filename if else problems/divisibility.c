#include <stdio.h>
int main(void)
{
    int num1;
    printf("enter a number:");
    scanf("%d",&num1);

    if(num1%3==0 && num1%5==0)
    {
        printf("%d is divisible by both 3 and 5",num1);

    }
    else if (num1%3==0)
    {
        printf("%d is divisible by 3\n",num1);

    }

    else if (num1%5==0)
    {
        printf("%d is divisible by 5",num1);
    }


    else
    {
        printf("%d is not divisible by both 3 and 5",num1);
    }




    return 0;
}