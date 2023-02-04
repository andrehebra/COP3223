/*

Andre Hebra
COP3223C
Section 2
Programming Assignment #1
Problem C

*/


#include <stdio.h>

/*define given variables*/
#define FIRST_CAR_LENGTH 10;
#define NORMAL_CAR_LENGTH 8;
#define CAR_CAPACITY 4;
#define PERCENT_CAPACITY 0.25;

int main() {
    
    /*ask user how many times the program should run, and save to variable*/
    int number_of_runs;
    printf("What is the value for N?\n");
    scanf("%d", &number_of_runs);

    /*for loop to run the program as many times as the user input*/
    for (int i = 0; i < number_of_runs; i++) {
        /*initialize variables for the track length and number of passengers*/
        int track_length;
        int max_train_length;

        int train_length = FIRST_CAR_LENGTH;
        int passengers_per_train = CAR_CAPACITY;

        /*ask user to input values of total length of track and train, and save them to variables*/
        printf("What is the total length of the track, in feet?\n");
        scanf("%d", &track_length);

        printf("What is the maximum length of a train, in feet?\n");
        scanf("%d", &max_train_length);

        /*while loop to determine the maximum length of a train with required variables*/
        int length_remaining = max_train_length - FIRST_CAR_LENGTH;
        int car_length = NORMAL_CAR_LENGTH;
        while (length_remaining >= car_length) {
            train_length += NORMAL_CAR_LENGTH;
            passengers_per_train += CAR_CAPACITY;
            length_remaining -= NORMAL_CAR_LENGTH;
        }

        /*while loop to calculate the maximum number of trains that can go on the track at one time without being over the capacity
        with required variables*/
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

        /*calculate the total number of passengers based on the number of trains*/
        int total_passangers = number_of_trains * passengers_per_train;

        /*output to user the maximum number of people that can be on the ride at one time*/
        printf("Your ride can have at most %d people on it at one time.\n", total_passangers);

        /*output the surplus remaining in feet, or output that it fits exactly*/
        if (max_train_length > train_length) {
            printf("Maximum Train Length has surplus of %d feet\n\n", max_train_length - train_length);
        } else {
            printf("Maximum Length fits exactly\n\n");
        }
    }

    

    return 0;
}