#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("enter the three person's age to find the greatest:");
    scanf("%d%d%d", &n1, &n2, &n3);
    if (n1>n2 && n1>n3) {
        printf("The person 1 is older.\n");
    }
    else if (n2>n1 && n2>n3) {
        printf("The person 2 is older.\n");
    }
    else {
        printf("The person 3 is older.\n");
    }

    return 0;

}
