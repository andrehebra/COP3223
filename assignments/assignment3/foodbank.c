#include <stdio.h>
#include <string.h>



int main() {
    int input;
    char holder[20];
    int quantity;

    int complete;
    int requestIndex;

    char donations_inv_type[100][20];
    for (int i = 0; i < 100; i++) {
        donations_inv_type[i][0] = '\0';
    }
    int donations_amount[100];

    char request_inv_type[100][20];
    for (int i = 0; i < 100; i++) {
        request_inv_type[i][0] = '\0';
    }
    int request_amount[100];

    printf("Welcome to the Food Bank Program\n\n1. Add a donation\n2. Add a request\n3. Fulfill a request\n4. Print status report\n5. Exit\n\nEnter your choice: ");
    scanf("%d", &input);

    while (input != 5 && input >= 1 && input <= 4) {
        if (input == 1) {
            printf("Enter inventory type: ");
            scanf("%19s", holder);
            printf("Enter the amount: ");
            scanf("%d", &quantity);

            complete = 0;
            for (int i = 0; i < 100; i++) {

                if (complete == 0) {
                    if (strcmp(holder, donations_inv_type[i]) == 0) {
                        donations_amount[i] += quantity;
                        complete = 1;
                    } else if (donations_inv_type[i][0] == '\0') {
                        strcpy(donations_inv_type[i], holder);
                        donations_amount[i] = quantity;
                        complete = 1;
                    }
                }
            }

            printf("\nDonation Added\n");
            
        } else if (input == 2) {
            printf("Enter inventory type: ");
            scanf("%19s", holder);
            printf("Enter the amount: ");
            scanf("%d", &quantity);

            complete = 0;
            for (int i = 0; i < 100; i++) {

                if (complete == 0) {
                    if (strcmp(holder, request_inv_type[i]) == 0) {
                        request_amount[i] += quantity;
                        complete = 1;
                    } else if (request_inv_type[i][0] == '\0') {
                        strcpy(request_inv_type[i], holder);
                        request_amount[i] = quantity;
                        complete = 1;
                    }
                }
            }

            printf("\nRequest Added\n");

        } else if (input == 3) {

            printf("\n-------- Fulfilling Requests --------\n");

            complete = 0;
            requestIndex = -1;
            for (int i = 0; i < 100; i++) {
                if (complete == 0) {
                    if (strcmp(request_inv_type[0], donations_inv_type[i]) == 0) {
                        requestIndex = i;
                    }
                }
            }

            if (requestIndex == -1) {
                printf("\nCannot be Fulfilled\n");
            } else if (requestIndex >=0) {
                if (donations_amount[requestIndex] >= request_amount[0]) {
                    donations_amount[requestIndex] -= request_amount[0];
                    for (int i = 0; i < 99; i++) {
                        request_amount[i] = request_amount[i+1];
                        strcpy(request_inv_type[i], request_inv_type[i+1]);
                    }
                    printf("\nRequest Fulfilled\n");
                } else if (donations_amount[requestIndex] < request_amount[0]) {
                    request_amount[0] = request_amount[0] - donations_amount[requestIndex];
                    donations_amount[requestIndex] = 0;
                    printf("\nRequest Partially Fulfilled\n");
                }

                if (donations_amount[requestIndex] == 0) {
                    for (int i = requestIndex; i < 99; i++) {
                        donations_amount[i] = donations_amount[i+1];
                        strcpy(donations_inv_type[i], donations_inv_type[i+1]);
                    }
                }
            }

        } else if (input == 4) {
            printf("\nPrinting the Donations Table\n\n");
            for (int i = 0; i < 100; i++) {
                if (donations_inv_type[i][0] != '\0') {
                    printf("%s %d\n", donations_inv_type[i], donations_amount[i]);
                }
            }

            printf("\nPrinting the Requests Table\n\n");
            for (int i = 0; i < 100; i++) {
                if (request_inv_type[i][0] != '\0') {
                    printf("%s %d\n", request_inv_type[i], request_amount[i]);
                }
            }
        } 

        printf("\nWelcome to the Food Bank Program\n\n1. Add a donation\n2. Add a request\n3. Fulfill a request\n4. Print status report\n5. Exit\n\nEnter your choice: ");
        scanf("%d", &input);
    }

    printf("\n\nThank You for using the software. Bye for now.");

    return 0;
}