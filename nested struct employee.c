#include <stdio.h>

// Define the Employee structure with a nested Address structure
struct Employee {
    char name[50];
    int age;
    struct Address {
        char street[100];
        char city[50];
        char state[50];
    } address;
}emp;

int main() {
    //struct Employee emp;

    // Read employee details
    printf("Enter employee name: ");
    scanf("%49s", emp.name);
    printf("Enter employee age: ");
    scanf("%d", &emp.age);
    printf("Enter street: ");
    scanf(" %[^\n]%*c", emp.address.street);
    printf("Enter city: ");
    scanf("%49s", emp.address.city);
    printf("Enter state: ");
    scanf("%49s", emp.address.state);

    // Display employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("Age: %d\n", emp.age);
    printf("Address: %s, %s, %s\n", emp.address.street, emp.address.city, emp.address.state);

    return 0;
}
