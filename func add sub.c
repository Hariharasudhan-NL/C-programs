#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int main() {
    int num1, num2, result;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    result = add(num1, num2);
    printf("The sum of %d and %d is: %d\n", num1, num2, result);
    result = subtract(num1, num2);
    printf("The difference between %d and %d is: %d\n", num1, num2, result);

    return 0;
}
