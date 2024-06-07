#include <stdio.h>
int main(void)
{
    int yr;
    printf("enter a year:");
    scanf("%d",&yr);

    if (yr%4==0 && yr%100!=0)
    {
        printf("%d is leap year",yr);
    }
    else 
    {
        printf("%d is not leap year",yr);
    }
    return 0;
}