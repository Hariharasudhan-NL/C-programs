#include <stdio.h>
int   PE(int num) {
    return (num > 0 && num % 2 == 0);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (PE(number)) {
        printf("The number %d is positive and even.\n", number);
    } else {
        printf("The number %d is not positive and even.\n", number);
    }

    return 0;
}
