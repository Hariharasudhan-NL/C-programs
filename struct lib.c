#include <stdio.h>
struct Book {
    char title[100];
    char author[50];
    float price;
};
int main() {
    struct Book book;
    printf("Enter the book's title: ");
    scanf(" %[^\n]", book.title);
    printf("Enter the author's name: ");
    scanf(" %[^\n]", book.author);
    printf("Enter the price: ");
    scanf("%f", &book.price);

    printf("\nBook Details:\n");
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: %.2f\n", book.price);

    return 0;
}
