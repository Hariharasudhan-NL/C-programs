#include <stdio.h>
#include <unistd.h>

int main() {
    int redT, yellowT, greenT, no;
    printf("Enter duration for RED light : ");
    scanf("%d", &redT);
    printf("Enter duration for YELLOW light : ");
    scanf("%d", &yellowT);
    printf("Enter duration for GREEN light : ");
    scanf("%d", &greenT);
    printf("how much time to iterate : ");
    scanf("%d", &no);
    for (int T = 1; T <= no; T++) {
        printf("\nCycle %d :\n", T);
        printf("Traffic Light: RED\n");
        for (int i = redT; i > 0; i--) {
            printf("Time remaining: %d seconds\n", i);
            sleep(1);
        }
        printf("Traffic Light: YELLOW\n");
        for (int i = yellowT; i > 0; i--) {
            printf("Time remaining: %d seconds\n", i);
            sleep(1);
        }
        printf("Traffic Light: GREEN\n");
        for (int i = greenT; i > 0; i--) {
            printf("Time remaining: %d seconds\n", i);
            sleep(1);
        }
    }
    return 0;
}
