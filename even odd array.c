#include<stdio.h>
int main(){
    int arr[5];
    int even=0, odd=0;
    for(int i=0; i<5; i++){
            printf("Enter the number %d:",i+1);
            scanf("%d",&arr[i]);
    }
    for(int i=0; i<5; i++){
        if(arr[i] % 2 ==0 ){
            even++;
        }else{
            odd++;
        }
    }
    printf("The no.of.odd numbers:%d\n",odd);
    printf("The no.of.even numbers:%d\n",even);



return 0;
}
