#include <stdio.h>

int main() {

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

  return 0;
}