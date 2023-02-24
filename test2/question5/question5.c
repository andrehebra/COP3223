#include <stdio.h>

int main() {
    int input;
    int i = 0;
    int j = 0;
    int spaces = 0;
    int space_adder = -1;
    int stars = 1;
    int star_adder = 2;

    printf("Please enter an odd positive integer: ");
    scanf("%d", &input);

    spaces = (input - 1) / 2;

    for (i = 0; i < input; i++) {
        for (j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (j = 0; j < stars; j++) {
            printf("*");
        }
        
        printf("\n");

        if (spaces == 0) {
            space_adder = 1;
            star_adder = -2;
        }

        spaces += space_adder;
        stars += star_adder;
    }

    return 0;
}