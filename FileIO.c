#include <stdio.h>

// File   = A concete device with which you want to exchange information.
// Stream = The data flow you transfer from your program to your file or vice versa.
// Buffer = A memory area that is temporarily used to store data before it is sent to its destination

enum {SUCCESS, FAIL};

int main()
{
    int reveal = SUCCESS;
    char filename[] = "haiku.txt";
    FILE *fptr;

    fptr = fopen(filename, "r");

    if (fptr == NULL)
    {
        printf("Cannot open %s!\n", filename);
        reveal = FAIL;
    }

    else
    {
        printf("The value of fptr: 0x%p\n", fptr);
        printf("Ready to close the file!\n");
        fclose(fptr);
    }

    return (reveal);
}