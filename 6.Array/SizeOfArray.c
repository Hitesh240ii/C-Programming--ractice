#include <stdio.h>

int main(void)
{
    //to get size of an array use size of operator


    int myNumbers[] = {10, 25, 50, 75, 100};
    printf("%lu", sizeof(myNumbers)); // it will print 20 not 5 because sizeof operator returns the size in 
    
    // an int type is usually 4 byte therefore there are 5 elements so 4 x 5 = 20


    return 0 ;

}