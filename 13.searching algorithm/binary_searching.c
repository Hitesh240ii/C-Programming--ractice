#include <stdio.h>
int main(void)
{
    int a[10];
    int i,mid, key, low=0 , high=9;

    
    for (i=0 ; i<10 ; i++)
    {
        printf("Enter the array element %d:",i);
        scanf("%d",&a[i]);
    }

    printf("Enter the numbers to be searched:");
    scanf("%d",&key);

    while (low<=high)
    {
        mid = (low+ (high))/2;

        if (key == a[mid])
        {
            printf("%d found at index %d", key,mid);
            break;
        }
        else if(key>a[mid])
            low= mid +1;
        else
            high = mid -1;
    }
    if (low>high)
    {
        printf("/n%d not found",key);
    }
    return 0;
}