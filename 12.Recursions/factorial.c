#include <stdio.h>

int num;
int result;
 int fact(int num)
{
    if (num==0)
    {
        printf("Factorial is 1");
    }
    else
    {
        result = num * fact(num);
    }
}



int main(void)
{
    printf("Enter the number");
    scanf("%d",&num);
    fact(num);
    result = num * fact(num);
    printf("The factorial of the number is %d",result);
    return 0;
}