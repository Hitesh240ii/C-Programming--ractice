#include <stdio.h>

int main (void)
{
    int marks[3];//3 is the size of the array i.e only 3 value can be stored in marks array

    printf("Enter Phy marks:");
    scanf("%d",&marks[0]);

    printf("Enter chem marks:");
    scanf("%d",&marks[1]);

    printf("Enter maths marks:");
    scanf("%d",&marks[2]);

    printf("\n");

    printf("Physics marks are %d\n",marks[0]);
    printf("chemistry marks are %d\n",marks[1]);
    printf("maths marks are %d",marks[2]);

    
    return 0;
}