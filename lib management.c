#include <stdio.h>

int main() {
    int numCategories, i;
    int totalBooks = 0;
    printf("Enter the number of book categories: ");
    scanf("%d", &numCategories);
    int booksInCategory[numCategories];
    for (i = 1; i <= numCategories; i++) {
        printf("Enter the number of books in category %d: ", i );
        scanf("%d", &booksInCategory[i]);
        totalBooks += booksInCategory[i];
    }
    printf("Total number of books in the library: %d\n", totalBooks);

    return 0;
}
