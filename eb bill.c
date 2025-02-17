#include <stdio.h>
#include <string.h>
int main() {
    int customerID, unitsConsumed;
    char customerName[50];
    float billAmount = 0.0;
    scanf("%d", &customerID);
    scanf("%s", customerName);
    scanf("%d", &unitsConsumed);
   if (unitsConsumed <= 199) {
        billAmount = unitsConsumed * 1.20;
    } else if (unitsConsumed <= 399) {
        billAmount = (199 * 1.20) + ((unitsConsumed - 199) * 1.50);
    } else if (unitsConsumed <= 599) {
        billAmount = (199 * 1.20) + (200 * 1.50) + ((unitsConsumed - 399) * 1.80);
    } else {
        billAmount = (199 * 1.20) + (200 * 1.50) + (200 * 1.80) + ((unitsConsumed - 599) * 2.00);
    }
    if (billAmount > 400) {
        billAmount += billAmount * 0.15;
    }
    if (billAmount < 100) {
        billAmount = 100;
    }
    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Total Amount Payable: ₹%.2f\n", billAmount);

    return 0;
}
