#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("enter the three numbers to find the greatest:");
    scanf("%d%d%d", &n1, &n2, &n3);
    if (n1>n2 && n1>n3) {
        printf("The number 1 is Greater.\n");
    }
    else if (n2>n1 && n2>n3) {
        printf("The number 2 is Greater.\n");
    }
    else {
        printf("The number 3 is Greater.\n");
    }

    return 0;

}
