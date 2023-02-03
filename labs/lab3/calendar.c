#include <stdio.h>

int main() {

    int calendar_entry;
    int i, start=7, days=31;
    int week_counter = 1;
    int day_counter = 1;

    for (i=1; i<start; i++) {
        printf("...");
    }

    for (i=0; i<days; i++) {
        calendar_entry= (i+start);


        if (week_counter==3 && day_counter==4) {
            printf("   ");
        } else {
            printf(" %2d", i + 1);
        }
        
        

        day_counter++;
        if (calendar_entry%7==0) {
            printf("\n");
            week_counter++;
            day_counter=1;
        }
    }

    printf("\n");

    return 0;
}