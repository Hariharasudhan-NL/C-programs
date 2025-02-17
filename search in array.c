#include <stdio.h>

int main() {
    int arr[4];
    int search_element;
    int found = 0;
    int index;
    printf("Enter 4 elements for the array:\n");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter the search element:");
    scanf("%d", &search_element);
    for (int i = 0; i < 4; i++) {
        if (arr[i] == search_element) {
            found = 1;
            index=i;
            break;
        }
    }
    if (found==1) {
        printf("Element %d found in the array at index %d.\n", search_element, index);
    }
    else {
        printf("Element %d not found in the array.\n", search_element);
    }

    return 0;
}
