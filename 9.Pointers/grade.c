#include <stdio.h>
int main(void)
{
    int grade[3]={3,4,2};
    
    int *address1 = &grade[0];
    int *address2 = &grade[1];
    int *address3 = &grade[2];

    

    printf (" the value of the grad 1 is %d and the address of is %p\n", grade[0] , address1);
    printf (" the value of the grad 2 is %d and the address of is %p\n", grade[1] , address2);
        printf (" the value of the grad 3 is %d and the address of is %p", grade[2] , address3);



    return 0;
}