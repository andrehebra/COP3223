#include <stdio.h>

int main() {
    int input;
    int prime = 1;

    scanf("%d", &input);

    for (int i = 2; i < input; i++) {
        if (input % i == 0) {
            prime = 0;
        }
    }

    if (prime == 0) {
        printf("This is not a prime number");
    } else {
        printf("This is a prime number");
    }


    return 0;
}