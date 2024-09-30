#include <stdio.h>
int main(void)
{
    int a[10];
    int i,key,flag=0;//flag is 0 means the key is not found yet

    printf("Enter the numbers:");//inputting our values in the array 
    for (i=0 ; i<10 ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nenter the number you are searching for:");
    scanf("%d",&key);

    for (i =0 ; i<10 ; i++) //looping linearly through array to search for our req value
    {
        if (key == a[i])
        {
            printf("\n%d is found at %d",key,i);
            flag++;//key is incremented means we got the key
            break;
        }
        
    }
    if (flag==0) //flag will still remain 0 if the key is not found
        {
            printf("\n%d is not found",key);
        }
    return 0;
}