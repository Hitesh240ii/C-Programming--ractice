#include <stdio.h>

int main(void)
{
    int i=1;
    int num;
    int sum = 0;
    printf("enter the number: ");
    scanf("%d",&num);

    do
    {
        sum+= 2*i;
        i++;
    } while (i<=num);

    printf("The sum of first %d even numbers is : %d",num,sum);

    return 0;

    

    
}