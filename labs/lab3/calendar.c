#include <stdio.h>

int main() {

    int calendar_entry;
    int i, start=3, days=31;
    int week_counter = 1;
    int day_counter = 1;
    int sum = 0;

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
        

        if (week_counter==3) {
            sum += i+1;
        }
        

        day_counter++;
        if (calendar_entry%7==0) {
            printf("\n");
            week_counter++;
            day_counter=1;
        }
    }

    printf("\n");

    if (sum%7==0) {
        printf("the sum of the third week numbers is divisible by 7!\n");
    } else {
        printf("the sum of the third week numbers is not divisible by 7!\n");
    }

    return 0;
}