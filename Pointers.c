#include <stdio.h>


void printAge(int *pAge)
{
    printf("You are %d years old!\n", pAge);
}

int main()
{
    // Pointers = A "variable-like" reference that holds a memory address to another variable, array etc
    //          - Some tasks are performed more easily with pointers
    //        * = indirection operator (value at address)

    int age = 20;
    // int *pAge = &age;   // Stores the address as the value into our pointer

    int *pAge = NULL; // Considered good practice to assign NULL if declaring a pointer
    pAge = &age;
/*
    printf("Address of age: %p\n", &age);
    printf("Value of pAge: %p\n", pAge);
    printf("\n");

    printf("Size of age: %d bytes\n", sizeof(age));
    printf("Size of pointer: %d bytes\n", sizeof(pAge)); // All pointers are 8 bytes
    printf("\n");

    printf("Value of age: %d\n", age);
    printf("Value at stored address: %d\n", *pAge); // Dereferencing (extracting value at given address)
    printf("\n");
*/

    printAge(*pAge);

    return (0);
}