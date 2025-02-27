#include <stdio.h>

int sumArray(int *arr, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int total = sumArray(arr, size);
    printf("Sum of array elements: %d\n", total);

    return 0;
}
