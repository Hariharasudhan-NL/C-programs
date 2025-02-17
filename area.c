#include <stdio.h>

int main() {
    float radius;
    const float pi=3.14;
    printf("enter the radius of a circle");
    scanf("%f",&radius);
    float area=pi*radius*radius;
    printf("The area of the circl is:%f",area);
    return 0;
}
