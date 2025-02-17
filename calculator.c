#include <stdio.h>
#include <math.h>

int main() {
    int choice, num1, num2, result;

    printf("Basic Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Square of a number\n");

    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Addition
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;

        case 2:
            // Subtraction
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;

        case 3:
            // Multiplication
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;

        case 4:
            // Division
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            if (num2 != 0) {
                float division = (float)num1 / num2; // Perform float division
                printf("Result: %.2f\n", division);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case 5:
            // Modulus
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            if (num2 != 0) {
                result = num1 % num2;
                printf("Result: %d\n", result);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;

        case 6:
            // Square
            printf("Enter a number: ");
            scanf("%d", &num1);
            result = num1 * num1;
            printf("Square: %d\n", result);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
