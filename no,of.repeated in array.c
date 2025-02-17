#include<stdio.h>
int main(){
    int arr[5];
    int num, count=0;
    for(int i=0; i<5; i++){
            printf("Enter the number %d:",i+1);
            scanf("%d",&arr[i]);
    }
    printf("Enter the number to search for: ");
    scanf("%d", &num);
    for (int i = 0; i <=5; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    if (count > 0) {
        printf("The number %d appears %d times in the array.\n", num, count);
    } else {
        printf("The number is not present in the array.\n");
    }

    return 0;
}
