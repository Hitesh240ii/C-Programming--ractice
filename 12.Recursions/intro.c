/*
    -Recursions is technique making a function call itself
*/
#include <stdio.h>

int sum(int num) {
    if (num > 0) {
        return num + sum(num - 1);
    } else {
        return 0;
    }
}

int main(void) {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int result = sum(num);
    printf("Sum of numbers up to %d is %d\n", num, result);   
    return 0;
}
 
    //in 8th line recursive function is used