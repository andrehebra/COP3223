#include <stdio.h>

int main() {

    int sum = 0;
    int current;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &current);

        if (current * 10 > 85) {
            sum += current;
        }
    }

    printf("%d", sum * 100);

    return 0;
}