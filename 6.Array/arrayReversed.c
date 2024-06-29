#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int reversed[5];

    for (int i = 0; i < size; i++) {
        reversed[i] = numbers[size - 1 - i];
    }

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", reversed[i]);
    }
    printf("\n");

    return 0;
}
