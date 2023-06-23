#include <stdio.h>

int main()
{
    // BITWISE OPERATORS = Special Operators used in bit level programming
    //                   - Knowledge of binary is extremely important here

    // &  = AND            (if both are 1, assign 1; if both are 0, assign 0)
    // |  = OR             (if either is 1 or both are 1, assign 1; if both are 0, assign 0)
    // ^  = XOR            (if either is 1, assign 1; if both are either 0 or 1, assign 0)
    // << = left shitf     (shifts the input number of bits to the left)
    // >> = right shift    (shifts the input number of bits to the right)

    int x = 6;    // 6 = 00000110
    int y = 12;   // 12 =00001100
    int z = 0;    // 0 = 00000000

    z = x & y;    //         1000 = 4
    printf("AND = %d\n", z);

    z = x | y;    //         1110 = 14
    printf("OR = %d\n", z);

    z = x ^ y;    //         1010 = 10
    printf("XOR = %d\n", z);

    z = x << 2;   //        11000 = 24      // Everytime you left shift the number doubles
    printf("<< = %d\n", z);

    z = x >> 1;   //         0011 = 3       // Everytime you right shift the number halvens
    printf(">> = %d\n", z);


    return (0);
}