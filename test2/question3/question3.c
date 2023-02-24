#include <stdio.h>

int main() {
    int input = 0;
    int length = 0;
    int values[100];

    while (input != -99) {
        scanf("%d", &input);
        if (input != -99) {
            values[length] = input;
            length++;
        }
        
    }

    for (int i = 0; i < length; i++) {
        printf("%d  ", values[i]);
        printf("%d\n", values[i] * values[i]);
    }




    return 0;
}