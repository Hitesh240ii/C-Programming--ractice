#include <stdio.h>
int main(void)
{
    int a[10];
    int i,key,flag=0;

    printf("Enter the numbers:");
    for (i=0 ; i<10 ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nenter the number you are searching for:");
    scanf("%d",&key);

    for (i =0 ; i<10 ; i++)
    {
        if (key == a[i])
        {
            printf("\n%d is found at %d",key,i);
            flag++;
            break;
        }
        
    }
    if (flag==0)
        {
            printf("\n%d is not found",key);
        }
    return 0;
}