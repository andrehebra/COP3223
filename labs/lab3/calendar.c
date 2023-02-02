#include <stdio.h>

int main() {

    int calendar_entry;
    int i, start=3, days=31;

    for (i=0; i<start; i++) {
        printf("...");
    }

    for (i=0; i<days; i++) {
        calendar_entry= (i+start);

        printf(" %d", i + 1);
        if (calendar_entry%7==0) {
            printf("\n");
        }
    }

    return 0;
}