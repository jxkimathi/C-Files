#include <stdio.h> // header file for standard library
#include <stdbool.h> // header file for booleans

int main()
{
    // logical operators == && (AND) checks to see if two or more conditions are true

    float temp = 25;
    bool sunny = false; // 1 for true, 0 for false

    if (temp >= 0 && temp <= 30 && sunny == 0)
    printf("The weather is good!\n");

    else
    printf("The weather is bad!\n");

    return (0);

}