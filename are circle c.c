#include <stdio.h>
double areacircle(double radius) {
    return 3.14 * radius * radius;
}

int main() {
    double radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    if (area >= 0) {
        printf("The area of the circle is: %.2f\n",areacircle(radius));
    }
return 0;
}
