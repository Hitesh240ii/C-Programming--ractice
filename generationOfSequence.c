#include <stdio.h>

long nineNum(int length);
long sequence(int length)
{
    int i;
    long num = 0;

    if (length < 9)
    {
        for (i = 0; i < length; i++)
        {
            num = num * 10 + (i + 1);
        }
        printf("%ld\n", num); 
    }
    else
    {
        num = nineNum(length);
    }
    
    return num;
}

long nineNum(int length)
{
    long num = 0;
    int i;

    for (i = 0; i < length; i++)
    {
        num = num * 10 + 9;
    }

    printf("%ld\n", num);
    return num;
}

int main(void)
{
    int length;
    printf("Enter the length: ");
    scanf("%d", &length);

    sequence(length);
    
    return 0;
}
