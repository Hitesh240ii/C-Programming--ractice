#include <stdio.h>

long nineNum(int length);
// Function to generate a sequence of increasing digits if length < 9
long sequence(int length)
{
    int i;
    long num = 0;

    if (length < 9)
    {
        // Generate a number with digits starting from 1 to length
        for (i = 0; i < length; i++)
        {
            num = num * 10 + (i + 1);
        }
        printf("%ld\n", num); // Corrected format specifier to %ld for long type
    }
    else
    {
        // If length is 9 or more, use nineNum function
        num = nineNum(length);
    }
    
    return num;
}

// Function to generate a number consisting only of 9's
long nineNum(int length)
{
    long num = 0;
    int i;

    // Generate a number with 'length' number of 9's
    for (i = 0; i < length; i++)
    {
        num = num * 10 + 9;
    }

    printf("%ld\n", num); // Print the number correctly with %ld
    return num;
}

int main(void)
{
    int length;
    printf("Enter the length: ");
    scanf("%d", &length);

    // Call the sequence function
    sequence(length);
    
    return 0;
}
