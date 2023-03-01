/*

Andre Hebra
COP3223C
Section 3
Programming Assignment #2
Problem B

*/

#include <stdio.h>

/*define given variables*/
#define FIRST_CAR_LENGTH 10;
#define NORMAL_CAR_LENGTH 8;
#define CAR_CAPACITY 4;
#define PERCENT_CAPACITY 0.25;

int main() {
    /*initialize variables for the track length and number of passengers*/
    int track_length = FIRST_CAR_LENGTH;
    int max_train_length;

    int train_length = FIRST_CAR_LENGTH;
    int passengers_per_train = CAR_CAPACITY;

    int total_passengers[500];
    int passenger_sum = 0;
    int total_length[500];
    int length_sum = 0;
    int counter = 0;

    int max_pass = 0;
    int max_length = 0;

    /*ask user to input values of total length of track and train, and save them to variables*/
    printf("What is the total length of the track, in feet?\n");
    scanf("%d", &track_length);

    printf("What is the maximum length of a train, in feet?\n");
    scanf("%d", &max_train_length);


    int length_remaining = max_train_length - FIRST_CAR_LENGTH;
    int car_length = NORMAL_CAR_LENGTH;

    int first_car_length = FIRST_CAR_LENGTH;
    while (max_train_length > train_length) {
        float individual_capacity = (float)train_length / track_length;
        float current_capacity = individual_capacity;
        float final_capacity = current_capacity;
        int number_of_trains = 0;
        float percent_capacity_allowed = PERCENT_CAPACITY;
        while (current_capacity < percent_capacity_allowed) {
            final_capacity = current_capacity;
            number_of_trains++;
            current_capacity += individual_capacity;
        }

        total_passengers[counter] = number_of_trains * passengers_per_train;
        passenger_sum += total_passengers[counter];
        total_length[counter] = train_length * number_of_trains;
        length_sum += total_length[counter];

        if (total_passengers[counter] > max_pass) {
            max_pass = total_passengers[counter];
            max_length = 1 + ( train_length - first_car_length ) / NORMAL_CAR_LENGTH;
        }

        counter++;


        train_length += NORMAL_CAR_LENGTH;
        passengers_per_train += CAR_CAPACITY;
        length_remaining -= NORMAL_CAR_LENGTH;
    }

    
    printf("Your ride can have at most %d people on it at one time.\n", max_pass);
    printf("This can be achieved with trains of %d cars.\n", max_length);
    printf("AVG Ratio: %.3f\n", (float)passenger_sum / (float)length_sum);

    return 0;
}