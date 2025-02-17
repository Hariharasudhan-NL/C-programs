#include <stdio.h>

int main() {
    int num1, num2, num3;
    int sum;
    float avg;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    sum = num1 + num2 + num3;

    avg = sum / 3.0;

    printf("Sum: %d\n", sum);
    printf("Average: %f\n", avg);

    return 0;
}
