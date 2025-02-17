#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // Pointer to the first element

    printf("Array elements using pointer arithmetic:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    printf("\n");

    printf("First element: %d\n", *ptr);        // *ptr is equivalent to arr[0]
    printf("Second element: %d\n", *(ptr + 1)); // *(ptr + 1) is equivalent to arr[1]

    return 0;
}
