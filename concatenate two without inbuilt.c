#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;
    printf("Enter the first string: ");
   gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    while (str1[i] != '\0') {
        i++;
    }
    for (j = 0; str2[j] != '\0'; j++, i++) {
        str1[i] = str2[j];
    }

    str1[i] = '\0';

    printf("Concatenated string: %s\n", str1);

    return 0;
}
