#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100], copiedStr[100];
    gets(str1);
    int length = strlen(str1);
    printf("Length of string: %d\n", length);
    strcpy(copiedStr, str1);
    printf("Copied string: %s\n", copiedStr);
    printf("Enter another string for comparison: ");
    gets(str2);
    int comparisonResult = strcmp(str1, str2);
    if (comparisonResult == 0) {
        printf("Comparing '%s' and '%s': Both strings are equal.\n", str1, str2);
    } else if (comparisonResult > 0) {
        printf("Comparing '%s' and '%s': First string is greater.\n", str1, str2);
    } else {
        printf("Comparing '%s' and '%s': First string is smaller.\n", str1, str2);
    }
    strrev(str1);
    printf("Reversed string: %s\n", str1);
    strrev(str1);
    strlwr(str1);
    printf("Lowercase string: %s\n", str1);
    strupr(str1);
    printf("Uppercase string: %s\n", str1);
    strcat(str1, " ");
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
