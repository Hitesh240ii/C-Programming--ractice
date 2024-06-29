#include <stdio.h>

int main() {
    int numbers[6] = {12, 7, 9, 14, 25, 18};
    int size = 6; // Number of elements in the array
    int evenCount = 0, oddCount = 0;

    // Loop through the array and count even and odd numbers
    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Even numbers count: %d\n", evenCount);
    printf("Odd numbers count: %d\n", oddCount);

    return 0;
}
