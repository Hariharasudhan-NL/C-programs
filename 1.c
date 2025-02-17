#include <stdio.h>
int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
        }
return length;
}
void stringCopy(char *destination, const char *source) {
        int i = 0;
        while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
        }
        destination[i] = '\0';
}
int stringCompare(const char *str1, const char *str2) {
        while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
        return *str1 - *str2;
        }
        str1++;
        str2++;
        }
        return *str1 - *str2;
}
void stringReverse(char *str) {
        int start = 0;
        int end = stringLength(str) - 1;
        while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
         }
}
void stringLower(char *str) {
        int i = 0;
        while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
        str[i] += 32;
        }
        i++;
        }
}
void stringUpper(char *str) {
        int i = 0;
        while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] -= 32;
                }
                i++;
                }
}
void stringConcatenate(char *destination, const char *source, char *result) {
        int i = 0, j = 0;
        while (destination[i] != '\0') {
                result[i] = destination[i];
                i++;
                }
        result[i] = ' ';
            i++;
        while (source[j] != '\0') {
                result[i] = source[j];
                i++;
                j++;
                }
        result[i] = '\0';
}
int main() {
        char sourceString[101], destinationString[101], result[101];
        scanf("%100s", sourceString);
        printf("Length of string: %d\n", stringLength(sourceString));
        stringCopy(destinationString, sourceString);
        printf("Copied string: %s\n", destinationString);
        char secondString[101];
        printf("Enter the second string for comparison: ");
        getchar();
        fgets(secondString, sizeof(secondString), stdin);
        int comparisonResult = stringCompare(sourceString, secondString);
        if (comparisonResult == 0) {
            printf("Comparing '%s' and '%s': Strings are equal\n", sourceString, secondString);
            } else if (comparisonResult < 0) {
            printf("Comparing '%s' and '%s': First string is smaller\n", sourceString, secondString);
            } else {
                printf("Comparing '%s' and '%s': First string is greater\n", sourceString, secondString);
            }
        stringReverse(destinationString);
        printf("Reversed string: %s\n", destinationString);
        stringReverse(destinationString);
        stringLower(destinationString);
        printf("Lowercase string: %s\n", destinationString);
        stringUpper(destinationString);
        printf("Uppercase string: %s\n", destinationString);
        stringConcatenate(sourceString, secondString, result);
        printf("Concatenated string: %s\n", result);
        return 0;
}
