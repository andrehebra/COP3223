#include <stdio.h>

int main() {
    int sum = 0;
    int multiplied_sum = 0;
    int current = 0;

    for (int i = 0; i < 41; i++) {
        printf("Please enter an integer: ");
        scanf("%d", &current);

        if (current * current > 500) {
            sum += current;
        }
    }

    multiplied_sum = sum * sum;

    printf("the multiplied sum is: %d", multiplied_sum);
}