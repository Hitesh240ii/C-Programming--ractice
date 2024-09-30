#include <stdio.h>
int main(void)
{
    int a[10];
    int i,j,k,n,temp;
    n=5;

    printf("Enter %d array elements:",n);
    for (i = 0 ; i<n ; i++)
        scanf("%d",&a[i]);
    
    printf("\n the array elements are:");
    for ( i= 0 ; i<n ; i++)
        printf("\t%d",a[i]);
    
    for (i=0 ;i <n ; i++ )
        {
            for (j=0 ; j<n-i-1 ; j++)
            {
                if (a[j]>a[j+1])
                {
                    temp= a[j];
                    a[j]= a[j+1];
                    a[j+1] = temp;
                }
            }
            printf("\n Result of Itration %d:\t",i+1);
            for (k=0 ; k<n ; k++)
                printf("\t%d",a[k]);
        }
        printf("\n sorted array elements:\t");
        for (i=0 ; i<n ; i++)
            printf("\t%d",a[i]);

    return 0;
}