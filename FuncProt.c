#include <stdio.h>

// In ALX the function prototypes are placed in a created header file...mainly main.h
void hello(char [], int); // function prototype

int main()
{

    // function prototype - A function declaration without a body before main()
    //                    - Ensures  that calls to a function are made with the correct arguments

    char name[] = "Jude";
    int age = 20;

    hello(name, age); // calling the function hello

    return (0);

}

void hello(char name[], int age) // function containing the needed code
{
    printf("Hello, %s\n", name);
    printf("You are %d years old!\n", age);
}

// IMPORTANT NOTES
// Most C compilers do not check for parameter matching
// Missing arguments will result in unexpected behaviour
// A function prototype causes the compiler to flag an error if arguments are missing