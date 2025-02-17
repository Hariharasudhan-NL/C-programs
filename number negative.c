#include <stdio.h>

int main() {
    int num;

    while (1) {
        printf("Enter a number (enter a negative number to stop): ");
        scanf("%d", &num);
        if (num < 0) {
            printf("Negative number entered. Exiting loop.\n");
            break;
        }
    }
  return 0;
}
