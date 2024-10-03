#include <stdio.h>

int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        printf("Array size is less than 2\n");
        return -1;
    }
    
    int first = arr[0];
    int sec = -1;

    for (int i = 1; i < size; i++) {
        if (arr[i] > first) {
            sec = first;
            first = arr[i];
        } else if (arr[i] > sec&& arr[i] != first) {
            sec = arr[i];
        }
    }
    return sec;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int secondLargest = findSecondLargest(arr, size);
    if (secondLargest != -1) {
        printf("The second largest element is %d\n", secondLargest);
    }
    return 0;
}
