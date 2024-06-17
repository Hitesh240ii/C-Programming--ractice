#include <stdio.h>
int main(void)
{
    int i;
    int sum;

    for(i=1; i<=100 ; i++)
    {
        sum +=i;

    }
    printf(" sum of first 100 natural numbers is %d", sum);

    return 0;
}