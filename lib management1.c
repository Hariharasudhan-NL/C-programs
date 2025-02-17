#include <stdio.h>

int main() {
    int encyclopedia, comics, sports, gk;
    int totalBooks;
    printf("Enter the number of books in encyclopedia: ");
    scanf("%d", &encyclopedia);
    printf("Enter the number of books in comics: ");
    scanf("%d", &comics);
    printf("Enter the number of books in sports: ");
    scanf("%d", &sports);
    printf("Enter the number of books in gk: ");
    scanf("%d", &gk);
    totalBooks = encyclopedia + comics + sports + gk;
    printf("Total number of books in the library: %d\n", totalBooks);
    return 0;
}
