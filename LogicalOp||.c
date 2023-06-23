#include <stdio.h> // header file for standard library
#include <stdbool.h> // header file for booleans

int main()
{
    // logical operators = || (OR) checks if at least one condition is true

    float temp = 25;
    bool sunny = true;

    if (temp <= 0 || temp >= 30 || sunny == false)
    printf("The weather is bad!\n");

    else
    printf("The weather is good!\n");

    return (0);

}