#include <stdio.h>

int main() {
    int arr[4];
    int i, j, temp;
    printf("Enter 4 elements for the array:\n");
    for (i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 4; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array in ascending order: ");
    for (i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
