#include <stdio.h>

struct gas {
    float distance;
    float gals;
    float mpg;
    float gas;
};

void mpg(struct gas *g1) {
    (*g1).mpg = 
}

int main() {
    struct gas first;

    scanf("%f", &first.gas);

    mpg(&first);

    return 0;
}