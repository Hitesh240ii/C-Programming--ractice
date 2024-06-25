#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int *ptr = arr;

    ptr += 3;

    printf("%d\n", *ptr);
    printf("%d\n", *(ptr - 1));

    return 0;
}
