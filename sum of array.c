#include <stdio.h>

int main() {
    int arr[5];
    int sum = 0;
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    printf("Sum of elements: %d\n", sum);
    return 0;
}

