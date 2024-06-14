#include <stdio.h>

int main(void)
{
    int i=0; // this loop will be executed even if value of i is initialized as 10 because do while loop executes atleast once even the cond in false
    do 
    {
        printf("%d ",i);
        i++;
    }
    while(i<5);//do part will be executed even if the condition is false
return 0;
}
// test by changing value of i to 20s