#include <stdio.h>

int main() {
    int input = 0;
    int width, height;

    while (input != -99) {
        scanf("%d", &input);
    }

    scanf("%d", &width);
    scanf("%d", &height);

    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < height - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < width; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}