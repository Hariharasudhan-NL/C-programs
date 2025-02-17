#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the value of a:");
    scanf("%d/n",&a);
    printf("enter the value of b:");
    scanf("%d/n",&b);

    printf("the value of a before swap:%d \n",a);
    printf("the value of b before swap:%d \n",b);

    c=a;
    a=b;
    b=c;

    printf("the value of a after swap:%d \n",a);
    printf("the value of b after swap:%d \n",b);

}
