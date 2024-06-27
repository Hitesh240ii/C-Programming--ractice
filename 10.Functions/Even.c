#include <stdio.h>

int isEven(int num);

int main() {
    int num = 4;
    if (isEven(num)) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    return 0;
}

int isEven(int num) {
    return num % 2 == 0;
}
