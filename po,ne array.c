#include<stdio.h>
int main(){
    int arr[5];
    int positive_count=0, negative_count=0;
    for(int i=0; i<5; i++){
            printf("Enter the number %d:",i+1);
            scanf("%d",&arr[i]);
    }
    printf("Positive numbers: ");
    for(int i = 0; i < 6; i++) {
        if(arr[i] > 0) {
            printf("%d ", arr[i]);
            positive_count++;
        }
    }printf("\nNegative numbers: ");
    for(int i = 0; i < 6; i++) {
        if(arr[i] < 0) {
            printf("%d ", arr[i]);
            negative_count++;
        }
    }
    printf("\nPositive count: %d", positive_count);
    printf("\nNegative count: %d", negative_count);
    return 0;
}
