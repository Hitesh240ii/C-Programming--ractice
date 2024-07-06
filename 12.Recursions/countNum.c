#include <stdio.h>

int countDigits(int n) {
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}

int main() {
    int n = 12345;
    int result = countDigits(n);
    
    if (n == 0) {
        result = 1;
    }
    
    printf("The number of digits in %d is %d\n", n, result);
    return 0;
}
