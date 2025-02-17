#include <stdio.h>

int main() {
    int grades, income, age;
    printf("Enter student's grades: ");
    scanf("%d", &grades);
    printf("Enter student's income: ");
    scanf("%d", &income);
    printf("Enter student's age: ");
    scanf("%d", &age);
    if (grades>80){
        if (income<50000){
            if (age>18){
                printf("you are eligible for scholarship");
            }
        }
    }

}
