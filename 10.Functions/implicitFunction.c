#include <stdio.h>

void myFun()
{
    printf("This is in fun1");
    myOtherFun();
}

void myOtherFun()
{
    printf("This is in implicit function");
}


int main(void)
{
    myFun();
    return 0;
}