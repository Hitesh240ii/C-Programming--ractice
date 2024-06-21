#include <stdio.h>
int main(void)
{
    int MyNum[]= {10,20,30,40,50}; //creating an array

    printf("%d\n",MyNum[1]); // this will print 20

    MyNum [1] = 101; //replacing value of index 1

    printf("%d",MyNum[1]);


    return 0;
}