#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Pointer address: %p, Value: %d\n", ptr, *ptr);

    ptr++;
    printf("Pointer address: %p, Value: %d\n", ptr, *ptr);

    return 0;
}
