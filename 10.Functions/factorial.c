#include <stdio.h>

int Factorial(int num)
{
    int i;
    int result= 1;
    if (num<0)
    {
        return -1;
    }
    else
    {
        for (i = 0 ; i<=num ; i++)
        {
             result= result *i ;
        }
        return result;
    }
    return 0;
}

int main(void)
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);

    Factorial(number);
    
    return 0;
}

