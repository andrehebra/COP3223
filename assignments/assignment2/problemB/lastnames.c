

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n;
    int current_char = 2;
    int counter = 0;
    char names[100];
    char first_name[100];
    char current_name[100];
    char space[1];
    space[0] = ' ';
    int match = 0;

    /*ask user for n and the last names*/
    printf("Enter n, followed by n Last names (each last name must be a single word):\n");
    scanf("%[^\n]%*c", names);

    n = names[0] - '0';
    
    while (isalpha(names[current_char])) {
        first_name[counter] = names[current_char];
        current_char++;
        counter++;
    }

    current_char++;
    
    
    
    for (int j = 0; j < n - 1; j++) {
        counter = 0;
        while (isalpha(names[current_char])) {
            current_name[counter] = names[current_char];
            current_char++;
            counter++;
        }

        if (first_name == current_name) {
            match = 1;
        }

        current_char++;
    }

    if (match == 1) {
        printf("First name in list is repeated.");
    } else {
        printf("First name in list is not repeated.");
    }
    

    return 0;
}