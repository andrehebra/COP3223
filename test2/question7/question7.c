#include <stdio.h>

int main() {
    float current, previous;

    scanf("%f", &previous);
    scanf("%f", &current);

    while (current < previous) {
        printf("%f\n", current * previous);
        previous = current;
        scanf("%f", &current);
    }

    printf("The last number entered is not smaller than the previous number");

    return 0;
}