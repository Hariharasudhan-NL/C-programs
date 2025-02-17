#include<stdio.h>
int main()
{
    int a,b,c =0;
    printf("number 1:");
    scanf("%d",&a);
    printf("number 2:");
    scanf("%d",&b);
    while (a>=b) {
        a-=b;
        c++;
    }
    printf("c:%d\n",c);
    return 0;

}

