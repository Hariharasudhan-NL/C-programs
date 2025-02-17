#include<stdio.h>
int main(){
    int arr[5];
    int duplicates = 0;
    for(int i=0; i<5; i++){
            printf("Enter the number %d:",i+1);
            scanf("%d",&arr[i]);
    }
    for(int i = 0; i <=5; i++) {
        for(int j = i + 1; j <=5; j++) {
            if(arr[i] == arr[j]) {
                duplicates++;
                break;
            }
        }
    }
    printf("Number of duplicate elements: %d\n", duplicates);
    return 0;
}
