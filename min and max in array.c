#include <stdio.h>

int main() {
    int arr[5];
    int max, min;
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Largest element: %d\n", max);
    printf("Smallest element: %d\n", min);

    return 0;
}
