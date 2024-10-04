#include <stdio.h>

int main(void)
{
    int num1,term ; // DIFFERENCE IS 2 , FIRST TERM IS 1 , AND THE FORUMULA IS 
                    // Nth term = first term +( n - 1 )*d
                    //simple code just use formulae 
                    
    printf("Enter the number of the term you want :");
    scanf("%d", &num1);

    term = 1 + (num1 - 1) * 2 ;

    printf("The %d-th term of the arithmetic sequence is %d",num1 ,term);
    
    return 0;
}