#include <stdio.h>

int main() {
    int i;
    int arr1[4], arr2[4];
    printf("Enter 4 elements for the array:\n");
    for(i = 0; i < 4; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    for(i = 0; i < 4; i++) {
        arr2[i] = arr1[i];
    }
    printf("The copied array is:\n");
    for(i = 0; i < 4; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}
