#include <stdio.h>

int main() {
    // create an array
    int array[100];
    // create int pointer that points to the first position of the array we created
    int *array_ptr = &array;

    // change all of the values of the array using the array
    // incrementing the array_ptr value by one moves the address to the next position in the array
    for (int i = 0; i < 100; i++) {
        *array_ptr = i;
        array_ptr++;
    }

    // print out each value of the array, which has been changed using the pointer
    for (int i = 0; i < 100; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}