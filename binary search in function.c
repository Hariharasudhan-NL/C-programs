#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target){
            return mid;
        }
        if (target < arr[mid]){
            return binarySearch(arr, left, mid - 1, target);
        }
        else{
        return binarySearch(arr, mid + 1, right, target);
    }
    }
    return -1; // Target not found
}


int main() {
    int n, i, target, arr[100], result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value to find: ");
    scanf("%d", &target);

    // Perform recursive binary search
    result = binarySearch(arr, 0, n - 1, target);

    if (result == -1)
        printf("Value not found\n");
    else
        printf("Value found at index %d\n", result);

    return 0;
}
