#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];
    int length, comparisonResult;

    // Input strings from the user
    printf("Enter the first string: ");
    gets(str1); // Use gets() for multi-word input (unsafe; consider fgets() in production)

    printf("Enter the second string: ");
    gets(str2);

    // 1. String length (strlen)
    length = strlen(str1);
    printf("Length of the first string: %d\n", length);

    // 2. String copy (strcpy)
    strcpy(str3, str1);
    printf("Copied first string to another: %s\n", str3);

    // 3. String compare (strcmp)
    comparisonResult = strcmp(str1, str2);
    if (comparisonResult == 0) {
        printf("The two strings are equal.\n");
    } else if (comparisonResult > 0) {
        printf("The first string is greater than the second string.\n");
    } else {
        printf("The first string is less than the second string.\n");
    }

    // 4. String reverse (strrev)
    printf("Reversed first string: %s\n", strrev(str1)); // Reverses str1

    // Reverse back to original (optional)
    strrev(str1);

    // 5. String to lowercase (strlwr)
    printf("First string in lowercase: %s\n", strlwr(str1));

    // 6. String to uppercase (strupr)
    printf("First string in uppercase: %s\n", strupr(str1));

    // 7. String concatenation (strcat)
    strcat(str1, str2);
    printf("Concatenation of first and second strings: %s\n", str1);

    return 0;
}
