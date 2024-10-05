#include <stdio.h>
#include <stdlib.h>

#define size 7
int main(void)
{
    int temp[size];
    int i;
    int avg=0;
    int maxm, minm;

        minm = temp[0];



    for (i=0 ; i<size ; i++)
    {
        printf("Enter the temperature at Day %d:",i+1);
        scanf("%d", &temp[i]);

        avg = avg + temp[i];

         maxm = temp[0];

        if (temp[i]>maxm)
        {
            maxm = temp [i];
        }

        if (temp[i]<minm)
        {
           minm = temp[i];
        }
    }

    int avgTemp = avg / size; 

    printf("the average is %d:\n",avgTemp);
    
    printf("The hottest day in the week is %d\n",maxm);

   
    printf("The coldest day in the week is %d",minm);
    return 0;
}