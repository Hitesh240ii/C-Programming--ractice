#include <stdio.h>
int main(void)
{
    int num;
    int sum=0;

    printf("enter the number:");
    scanf("%d",&num);

    for (int i=0; i<=num ; i++)
    {
        if ( i%3==0 && i%5==0)  //or take lcm of 3 and 5 ,ie 15. then there is no use of if statement ok
        {
            printf("%d can be divided by 3 and 5 : \n",i);
            sum = sum+i;
        }
    }
    printf("sum = %d\n", sum);

    return 0;
}