#include <stdio.h>
struct Rectangle {
    float length;
    float breadth;
}rect;

int main() {
   // struct Rectangle rect;
    float area, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &rect.length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &rect.breadth);
    area = rect.length * rect.breadth;
    perimeter = 2 * (rect.length + rect.breadth);
    printf("\nArea of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}
