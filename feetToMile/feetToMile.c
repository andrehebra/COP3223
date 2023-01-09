#include <stdio.h>

int main(void) {
    int feet_in_mile, yards_in_mile;
    int feet_in_yard;

    yards_in_mile = 1760;
    feet_in_yard = 3;

    feet_in_mile = yards_in_mile * feet_in_yard;

    printf("yards in MI=%d\n\n\nfeet in MI = %d.\n", yards_in_mile, feet_in_mile);


}