#include <stdio.h>

int main() {
    int days;
    int start;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat");
    scanf("%d", &start);


    printf("The month calendar is below: \n");
    for (int i = 1; i <= start; i++) {
        printf("   ");
    }
    for (int i = 1; i < days; i++) {
        
        printf("%3d", i);

        if (start % 7 == 0) {
            printf("\n");
        }

        start++;
    }

    return 0;
}