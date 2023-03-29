#include <stdio.h>

int main() {
    int input;

    printf("Welcome to the Food Bank Program\n\n1. Add a donation\n2. Add a request\n3. Fulfill a request\n4. Print status report\n5. Exit\n\nEnter your choice: ");
    scanf("%d", &input);

    while (input != 5) {
        if (input == 1) {

        } else if (input == 2) {

        } else if (input == 3) {

        } else if (input == 4) {

        }

        printf("Welcome to the Food Bank Program\n\n1. Add a donation\n2. Add a request\n3. Fulfill a request\n4. Print status report\n5. Exit\n\nEnter your choice: ");
        scanf("%d", &input);
    }

    return 0;
}