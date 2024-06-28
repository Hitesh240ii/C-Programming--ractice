#include <stdio.h>
int num;
void sqr(int num)
{
    printf("%d is the square of the number",num*num);
}

int main(void)
{
    printf("Enter a number to square:");
    scanf("%d",&num);
    sqr(num);
    return 0;
}