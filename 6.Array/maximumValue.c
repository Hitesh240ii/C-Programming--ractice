#include <stdio.h>
int main(void)
{
    int maxm[]={9,4,0,4,8,4,2,7,8,3};
    int num;
    int maxm_value = maxm[0];

    for (int j= 1 ; j<10 ; j++)
    {
        if (maxm[j]>maxm_value)
        {
            maxm_value= maxm[j];
        }
    }
    printf("maxm number in your phone number is %d",maxm_value);

    return 0;
}