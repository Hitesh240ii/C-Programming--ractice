#include <stdio.h>

int main(void)
{
    //formula is Sn = (a1 + an )*n/2
    //easy code just by using formulae and inputs and outputs using scanf function
    
    int iniTerm, nterm, num;

    printf("Enter the initial term :");
    scanf("%d",&iniTerm);
    printf("Enter the n-th term:");
    scanf("%d", &nterm);
    printf("Enter the number of total terms:");
    scanf("%d", &num);

    int sum = ( iniTerm + nterm)*num/2;

    printf("The sum of the given arithmetic sequence is %d", sum);

    return 0;
}