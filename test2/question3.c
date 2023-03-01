#include <stdio.h>

int main() {
    int N, i;
    int currentStars = 0;
    int currentSpaces = 0;
    int starCounter = 1;
    int spaceCounter = -1;

    scanf("%d", &N);
    currentSpaces = (N-1) / 2;

    int j;

    for (int i = 1; i <= N; i++) {
        for (j = 0; j < currentSpaces; j++) {
            printf(" ");
        }
        for (j = 0; j < currentStars; j++) {
            printf("*");
        }
        if (i % 2 == 0) {
            printf("-");
        } else {
            printf("S");
        }
        for (j=0; j < currentStars; j++) {
            printf("*");
        }

        if ((N + 1) / i == 2) {
            starCounter = -1;
            spaceCounter = 1;
        }

        currentStars += starCounter;
        currentSpaces += spaceCounter;
        printf("\n");

    }

    return 0;


}
