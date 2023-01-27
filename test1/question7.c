#include <stdio.h>

int main() {

    int current;
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &current);
        if (current % 5 == 0) {
            sum += current;
        }
    }

    printf("%d", sum * 100);

    return 0;
}