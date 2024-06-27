#include <stdio.h>

int max(int a, int b);

int main() {
    int num1 = 10;
    int num2 = 15;
    int result = max(num1, num2);
    printf("The maximum of %d and %d is %d\n", num1, num2, result);
    return 0;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}
