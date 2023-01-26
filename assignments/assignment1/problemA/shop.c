/*

Andre Hebra
COP3223C
Section 2
Programming Assignment #1
Problem A: Gift Shop Purchase

1. ask user for price of item
2. ask user quantity of the item they are buying
3. ask whether or not the item is taxed (0 if not taxed, 1 if taxed)

solve this problem without an if statement or switch statement
do not use for loop or while loop

*/

#include <stdio.h>

/*UCF tax rate on items purchased*/
#define TAX_RATE 0.065;

int main(void) {

    /*create the variables that are required to calculate the final price*/
    float item_price;
    int quantity;
    int taxable;
    float total_price;
    float untaxed_price;
    float total_tax;

    /*ask for the price of the item*/
    printf("Please enter the item price: ");
    /*update item_price to reflect price entered*/
    scanf("%f", &item_price);

    /*ask for the quantity of the item*/
    printf("Please enter the item quantity: ");
    /*update quantity to reflect integer entered*/
    scanf("%d", &quantity);

    /*ask if the item is taxed*/
    printf("Please enter 1 if the item is taxed, or 0 if the item is not taxed: ");
    /*update taxable variable to indicate whether item is taxed*/
    scanf("%d", &taxable);

    /*calculate the total tax multiplier*/
    total_tax = 1.0 + taxable * TAX_RATE;

    /*calculate the final price*/
    total_price = item_price * quantity * total_tax;

    /*print out the total price to the user*/
    printf("Your total purchase will cost $%.2f.\n", total_price);

    return 0;
}