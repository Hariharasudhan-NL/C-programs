#include<stdio.h>
int main(){
    int number, cube, square;
    printf("Enter the number to find it's square and cube:");
    scanf("%d",&number);
    square = number * number;
    cube = number * number * number;
    printf("the square of a number:%d\n", square);
    printf("the cube of a number:%d\n", cube);
    return 0;
}
