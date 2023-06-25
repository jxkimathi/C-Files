#include <stdio.h>

int main()
{
    // memory = An array of bytes within RAM (street)
    // memory block = A single unit (byte) within memory, used to hold some value (house with a person inside)
    // memory address = The address of where a memory block is located (house address)

    char a = 'X';  // char = memory; a = memory block; X = memory address
    int b = 'Y';
    short c = 'Z';
    double d[2];

    printf("a takes up %d bytes\n", sizeof(a));
    printf("b takes up %d bytes\n", sizeof(b));
    printf("c takes up %d bytes\n", sizeof(c));
    printf("d takes up %d bytes\n", sizeof(d));
    printf("\n");

    printf("Memory address of a is %p\n", &a);
    printf("Memory address of b is %p\n", &b);
    printf("Memory address of c is %p\n", &c);
    printf("Memory address of d is %p\n", &d);

    return (0);
}