#include <stdio.h>
int main(void)
{
    int Num[9];
    int i;
    int maxmIndex;

    for (i = 0 ; i<10 ; i++)
    {
        printf("Enter your phone number :");
        scanf("%d",&Num[i]);
    }
    maxmIndex = Num[0];
    for (i =0 ; i<10 ; i++)
    {
        if (Num[i]>maxmIndex)
        {
            printf("The index of maxm value in your phone number is :%d",i+1);
        }
    }
    return 0;
}