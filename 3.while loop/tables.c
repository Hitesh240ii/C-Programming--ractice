#include <stdio.h>

int main(void)
{
    int num;
    int product;
    int i=1;

    printf("enter the number :");
    scanf("%d",&num);

    while (i<=10)
    {
        product = num*i;
        i++;
        printf("%d\n",product);
    }
return 0;
}