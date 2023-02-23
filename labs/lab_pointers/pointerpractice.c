#include <stdio.h>

int main() {

    // integer
    int i = 3;
    // pointer
    int *i_pointer;
    // set pointer equal to int i
    i_pointer = &i;
    // change the value of i by using the pointer that is at that point in memory
    *i_pointer = 4;

    // print out the value of i, which has been changed using the pointer
    printf("%d\n", i);

    return 0;
}