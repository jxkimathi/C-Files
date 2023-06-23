#include <stdio.h>

int main()
{
    // Arithmetic operators

    // +  (addition)
    // -  (subtraction)
    // *  (multiplication)
    // /  (division)
    // %  (modulo)
    // ++ (increment)
    // -- (decrement)

    int x = 5;
    int y = 2;

    // int z = x + y;
    // int z = x - y;
    // int z = x * y;
    // float z = x / (float) y; // Integer division into a float (the divisor needs to be changed into a float)
    // int z = x % y; // It gives the remainder of the division
    // x++; 
    
    x++;
    y--;

    printf("%d\n", y);
    printf("%d\n", x);

    return (0);
    
}