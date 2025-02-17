#include <stdio.h>

int main() {
    float num1, num2, num3, num4, num5;
    float sum;
    float avg;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter third number: ");
    scanf("%f", &num3);

    printf("Enter fourth number: ");
    scanf("%f", &num4);

    printf("Enter fifth number: ");
    scanf("%f", &num5);

    sum = num1 + num2 + num3 + num4 + num5;

    avg = sum / 5.0;

    printf("Sum: %f\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}
