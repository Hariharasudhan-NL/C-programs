#include <stdio.h>
int main() {
int operator;
scanf("%d", &operator);
switch (operator) {
case 1: { // Addition
int num1, num2;
scanf("%d %d", &num1, &num2);
printf("%d\n", num1 + num2);
break;
}
case 2: { // Subtraction
int num1, num2;
scanf("%d %d", &num1, &num2);
printf("%d\n", num1 - num2);
break;
}
case 3: { // Multiplication
int num1, num2;
scanf("%d %d", &num1, &num2);
printf("%d\n", num1 * num2);
break;
}
case 4: { // Division
float num1, num2;
scanf("%f %f", &num1, &num2);
if (num2 == 0) {
printf("Error: Division by zero\n");
} else {
printf("%.2f\n", num1 / num2);
}
break;
}
case 5: { // Modulus
int num1, num2;
scanf("%d %d", &num1, &num2);
if (num2 == 0) {
printf("Error: Division by zero\n");
} else {
printf("%d\n", num1 % num2);
}
break;
}
case 6: { // Square
float num;
scanf("%f", &num);
printf("%.2f\n", num * num);
break;
}
default:
printf("Invalid operation\n");
}
return 0;
}
