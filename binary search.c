#include<stdio.h>
int main()
{

    int i, left, right, mid, n, target, arr[100];
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter %d integers:", n);
    for(i = 0; i < n; i++)
    scanf("%d",&arr[i]);
    left=0;
    right=n-1;
    printf("Enter value to find:");
    scanf("%d",&target);
    int found=0;
    while(left<=right){
        mid=left+(right-left)/2;
        if(target==arr[mid]){
            found++;
            break;
        }
        if (target<arr[mid]){
            right=mid-1;
        }
        if (target>arr[mid]){
            left=mid+1;
        }
    }
    if(found==0){
        printf("not found");
    }
    else{
        printf("found at index %d",mid);
    }
    return 0;
}
