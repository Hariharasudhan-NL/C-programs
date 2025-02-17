#include<stdio.h>
int main()
{
    int num;
    printf("enter number :");
    scanf("%d",&num);
    num<<=4;
    printf("Left shift: %d\n",num);
    num>>=3;
    printf("right shift:%d\n",num);
    return 0;
}

