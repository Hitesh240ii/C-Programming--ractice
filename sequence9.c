#include <stdio.h>

int sequence(int length)
{
    int num=0;
    int i;

    for (i= 0 ; i<length; i++)
    {
        num = num*10+9;
    }
    printf("%d",num);
}



int main(void)
{
    int length;
    printf("Enter the length:");
    scanf("%d",&length);

    sequence(length);
    return 0;
}