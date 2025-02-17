#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;
    int areEqual = 1;
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            areEqual = 0;
            break;
        }
        i++;
    }

    // If both strings are of different lengths, they are not equal
    if (str1[i] != str2[i]) {
        areEqual = 0;
    }
    if (areEqual) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
