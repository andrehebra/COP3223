/*
1. ask user for price of item
2. ask user quantity of the item they are buying
3. ask whether or not the item is taxed (0 if not taxed, 1 if taxed)

solve this problem without an if statement or switch statement
do not use for loop or while loop
*/

#include <stdio.h>

/*UCF tax rate on items purchased*/
#define TAX_RATE 0.065

int main(void) {
    float item_price;
    int quantity;
    int taxable;
    float total_price;

    printf("Please enter the item price: ");
    scanf("%f", item_price);

}