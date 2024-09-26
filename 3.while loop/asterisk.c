#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter the number of asterisk you want: ");
    scanf("%d",&num);

    while(num>0)
    {
        printf(" * ");
        num--;
    }


    return 0;
}