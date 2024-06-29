#include <stdio.h>

int main() {
    int numbers[5] = {23, 45, 12, 67, 34};
    int size = 5;
    int max = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("Maximum element: %d\n", max);
    return 0;
}
