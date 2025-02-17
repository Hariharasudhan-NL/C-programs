#include <stdio.h>
int isEven(int num) {
    if (num % 2 == 0) {
         printf("%d is even.\n", num);
    } else {
         printf("%d is not even.\n", num);
    }
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    isEven(number);
    return 0;
}
