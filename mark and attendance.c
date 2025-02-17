#include <stdio.h>

int main() {
    int marks, attendance;
    printf("Enter student's marks: ");
    scanf("%d", &marks);
    printf("Enter student's attendance percentage: ");
    scanf("%d", &attendance);
    if(marks>75){
        if(attendance>90){
            printf("Student passed with distinction");
        }
    }
}
