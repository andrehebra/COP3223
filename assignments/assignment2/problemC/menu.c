/*

Andre Hebra
COP3223C
Section 3
Programming Assignment #2
Problem C: menu

*/
#include <stdio.h>

#define FIRST_CAR_LENGTH 10;
#define NORMAL_CAR_LENGTH 8;
#define CAR_CAPACITY 4;
#define PERCENT_CAPACITY 0.25;

int main() {
    int choice;

    //get the choice of the user of which program they would like to use
    printf("Please choose which program to run\n     1. Roller coaster length calculator (coaster2.c)\n     2. Last name repition checker(lastnames.c)\n     3. Quit\n");
    scanf("%d", &choice);

    while (choice != 3) {
        if (choice == 1) {
            /*initialize variables for the track length and number of passengers*/
            int track_length = FIRST_CAR_LENGTH;
            int max_train_length;

            int train_length = FIRST_CAR_LENGTH;
            int passengers_per_train = CAR_CAPACITY;

            //arrays for the total passengers for each train length, and a sum of all
            int total_passengers[500];
            int passenger_sum = 0;
            //array for the total length of each train that is calculated, and a sum of all
            int total_length[500];
            int length_sum = 0;
            //a counter to go through the array and write the values required
            int counter = 0;

            //values of the maximum possible amount of passengers and the corresponding train length for that number
            int max_pass = 0;
            int max_length = 0;

            /*ask user to input values of total length of track and train, and save them to variables*/
            printf("What is the total length of the track, in feet?\n");
            scanf("%d", &track_length);

            printf("What is the maximum length of a train, in feet?\n");
            scanf("%d", &max_train_length);


            int car_length = NORMAL_CAR_LENGTH;
            int first_car_length = FIRST_CAR_LENGTH;
            float percent_capacity_allowed = PERCENT_CAPACITY;

            //the individual capacity or percentage of the track that one train takes up
            float individual_capacity;
            //the current percentage of track that is being taken up
            float current_capacity;
            //the current number of trains that are on the track, corresponding to the current capacity
            int number_of_trains;


            //while loop to run through every possible train length
            while (max_train_length >= train_length) {
                //reinitialize each variable for every run
                individual_capacity = (float)train_length / track_length;
                current_capacity = individual_capacity;
                number_of_trains = 0;
                //calculate what the maximum number of trains is for the given capacity of the track
                while (current_capacity < percent_capacity_allowed) {
                    number_of_trains++;
                    current_capacity += individual_capacity;
                }

                //save the total_passengers, and total_length to arrays, as well as make a sum of each for calculating the average
                total_passengers[counter] = number_of_trains * passengers_per_train;
                passenger_sum += total_passengers[counter];
                total_length[counter] = train_length * number_of_trains;
                length_sum += total_length[counter];

                //find the maximum, if the current maximum amount of passengers exceeds the previous, save it to the max values for passengers and lengths
                if (total_passengers[counter] > max_pass) {
                    max_pass = total_passengers[counter];
                    max_length = 1 + ( train_length - first_car_length ) / NORMAL_CAR_LENGTH;
                }

                //increment the counter to save the next values in the correct spot in the array
                counter++;


                //increment the train length to test the next possible addition of a train car
                train_length += NORMAL_CAR_LENGTH;
                //increment the number of passengers to corrispond with the train length
                passengers_per_train += CAR_CAPACITY;
            }

            
            printf("Your ride can have at most %d people on it at one time.\n", max_pass);
            printf("This can be achieved with trains of %d cars.\n", max_length);
            printf("AVG Ratio: %.3f\n", (float)passenger_sum / (float)length_sum);
        } else if (choice == 2) {
            //value of n for how many name are to be compared
            int n;
            //list of names
            char names[500];
            //current position of the names[] so that it can be read from and moved to either firstName or currentName
            int currentPosition = 2;
            //first name in the list in names[]
            char firstName[100];
            //current name in the list that will be compared to firstName
            char currentName[100];

            //the current position in either currentName or FirstName
            int writingPosition = 0;

            //no match if equal to zero, match if equal to one
            int isMatch = 0;

            //take in the value n and the list of names
            printf("Enter n, followed by n Last names (each last name must be a single word):\n");
            scanf("\n");
            scanf("%[^\n]%*c", names);

            //set the value of n from the first position in names
            n = names[0] - 48;

            //take in the first name in the list and save it to firstName
            while (isalpha(names[currentPosition])) {
                firstName[writingPosition] = names[currentPosition];
                currentPosition++;
                writingPosition++;
            }

            //end the firstName with '\0' and increment the currentPosition to be at the start of the next name
            firstName[writingPosition] = '\0';
            currentPosition++;

            //go through each of the remaining names and compare them against firstName
            for (int i = 0; i < n - 1; i++) {
                writingPosition = 0;

                //take in the current name and save it to currentName
                while (isalpha(names[currentPosition])) {
                currentName[writingPosition] = names[currentPosition];
                currentPosition++;
                writingPosition++;
                }

                //add '\0' to the end of currentName and increment the position of the counter of names to start at the next word
                currentName[writingPosition] = '\0';
                currentPosition++;

                //compare the value of firstName and currentName, if there is a match set isMatch to 1
                if (strcmp(firstName, currentName) == 0) {
                isMatch = 1;
                }
            }

            //if there is a match, print out the result, else statement prints out that there was not a match given that isMatch != 1
            if (isMatch == 1) {
                printf("First name in list is repeated.");
            } else {
                printf("First name in list is not repeated.");
            }
        }
        printf("\nPlease choose which program to run\n     1. Roller coaster length calculator (coaster2.c)\n     2. Last name repition checker(lastnames.c)\n     3. Quit\n");
        scanf("%d", &choice);
    }

    return 0;
}

