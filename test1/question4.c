#include <stdio.h>

int main() {
    int sum = 0;
    int current = 0;

    for (int i = 0; i < 5; i++) {
        printf("Please enter an integer: ");
        scanf("%d", &current);

        if (current > 100) {
            sum += current;
        }
    }

    printf("The sum of the numbers is: %d", sum);
}