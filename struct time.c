#include <stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    struct Time t;
    printf("Enter hours (0-23): ");
    scanf("%d", &t.hours);
    printf("Enter minutes (0-59): ");
    scanf("%d", &t.minutes);
    printf("Enter seconds (0-59): ");
    scanf("%d", &t.seconds);
    printf("The time is: %02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);

    return 0;
}
