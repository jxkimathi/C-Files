#include <stdio.h>

int main()
{
    // Format Specifiers (%) - Defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%8.2f\n", item1); // the 8 is for the field width to space out
    printf("Item 2: $%-8.2f\n", item2); // the - is to align it to the left side
    printf("Item 3: $%8.2f\n", item3); // the .2 is the precision of how many decimal points you want

    return (0);
    
}