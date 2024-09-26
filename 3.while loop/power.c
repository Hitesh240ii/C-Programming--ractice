#include <stdio.h>
int main(void)
{
    int num, pow;
    int ans=1;

    printf("enter the number : ");
    scanf("%d", &num);
    printf("Enter the power:");
    scanf("%d", &pow);

    while (pow>0)
    {
        ans = ans * num;
        pow--;
    }
    printf(" the answer is %d",ans);


    return 0;
}