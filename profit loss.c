#include <stdio.h>

int main() {
    int costPrice, sellingPrice, profitLoss;
    printf("Enter the cost price of the item: ");
    scanf("%d", &costPrice);
    printf("Enter the selling price of the item: ");
    scanf("%d", &sellingPrice);
    if (sellingPrice > costPrice) {
        profitLoss = sellingPrice - costPrice;
        printf("You made a profit of %d\n", profitLoss);
    }
    else if (costPrice > sellingPrice) {
        profitLoss = costPrice - sellingPrice;
        printf("You incurred a loss of %d\n", profitLoss);
    }
    else {
        printf("There is no profit or loss.\n");
    }

    return 0;
}
