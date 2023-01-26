/*

Andre Hebra
COP3223C
Section 2
Programming Assignment #1
Problem B: Calorie Counter

1. define calories burned for different activities per minute
2. define calories injested for different foods per minute
3. calculate the number of calories burned or gained in total, and convert to pounds

*/

#include <stdio.h>

/*define the calories used for each minute of activity*/
#define WALK_CAL 5;
#define STAND_CAL 2;
#define DRINK_CAL 20;
#define FOOD_CAL 40;
#define CALS_PER_POUND 3500;

int main() {

    /*variables for minutes of each activity and total number of calories for each*/
    int walk_minutes, walk_calories;
    int stand_minutes, stand_calories;
    int drink_minutes, drink_calories;
    int food_minutes, food_calories;
    int total_calories;

    float total_pounds;

    /*ask user how many minutes each activity was performed for, and update variables to reflect minutes and calories*/
    printf("How many minutes were you walking?\n");
    scanf("%d", &walk_minutes);
    walk_calories = walk_minutes * WALK_CAL;

    printf("How many minutes were you standing?\n");
    scanf("%d", &stand_minutes);
    stand_calories = stand_minutes * STAND_CAL;
    
    printf("How many minutes were you drinking?\n");
    scanf("%d", &drink_minutes);
    drink_calories = drink_minutes * DRINK_CAL;

    printf("How many minutes were you eating?\n");
    scanf("%d", &food_minutes);
    food_calories = food_minutes * FOOD_CAL;

    /*calculate the total number of calories, positive for burned, negative for injested*/
    total_calories = walk_calories + stand_calories - drink_calories - food_calories;

    /*calculate the total number of pounds gained or lost*/
    total_pounds = (float)total_calories / CALS_PER_POUND;

    if (total_pounds > 0.0) {
        printf("You lost %.3f pounds today!", total_pounds);
    } else {
        printf("Weight lost is %.3f pounds.\n", total_pounds);
    }
    

    return 0;
}