#include <stdio.h>
int stringlength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
void stringcopy(char *copiedstring, const char *sourcestring) {
    int i = 0;
    while (sourcestring[i] != '\0') {
        copiedstring[i] = sourcestring[i];
        i++;
    }
    copiedstring[i] = '\0';
}
int stringcompare(const char *sourcestring, const char *secondstring) {
    while (*sourcestring != '\0' && *secondstring != '\0') {
        int c = *sourcestring - *secondstring;
        if (c != 0) {
            return c;
        }
        sourcestring++;
        secondstring++;
    }
    return *sourcestring - *secondstring;
}
void stringreverse(char *str) {
    int start = 0;
    int end = stringlength(str) - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
void stringlower(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
        i++;
    }
}
void stringupper(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
        i++;
    }
}
void stringconcatenate(char *destination, const char *source) {
    int destLength = stringlength(destination);
    int i = 0;
    while (source[i] != '\0') {
        destination[destLength + i] = source[i];
        i++;
    }
    destination[destLength + i] = '\0';
}

int main() {
    char sourcestring[100], copiedstring[100];
    printf("Enter the source string: ");
    fgets(sourcestring, sizeof(sourcestring), stdin);
    sourcestring[strcspn(sourcestring, "\n")] = '\0';
    printf("Length of string: %d\n", stringlength(sourcestring));
    stringcopy(copiedstring, sourcestring);
    printf("Copied string: %s\n", copiedstring);
    char secondstring[100];
    printf("Enter the second string for comparison: ");
    fgets(secondstring, sizeof(secondstring), stdin);
    secondstring[strcspn(secondstring, "\n")] = '\0';
    int comparisonResult = stringcompare(sourcestring, secondstring);
    if (comparisonResult == 0) {
        printf("Comparing '%s' and '%s': Strings are equal\n", sourcestring, secondstring);
    } else if (comparisonResult < 0) {
        printf("Comparing '%s' and '%s': First string is smaller\n", sourcestring, secondstring);
    } else {
        printf("Comparing '%s' and '%s': First string is larger\n", sourcestring, secondstring);
    }
    stringreverse(copiedstring);
    printf("Reversed string: %s\n", copiedstring);
    stringreverse(copiedstring);
    stringlower(copiedstring);
    printf("Lowercase string: %s\n", copiedstring);
    stringupper(copiedstring);
    printf("Uppercase string: %s\n", copiedstring);
    stringconcatenate(sourcestring, secondstring);
    printf("Concatenated string: %s\n", sourcestring);
    return 0;


    return 0;
}
