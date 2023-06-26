#include <stdio.h>

int printString(char *str);

int main()
{
    char str[] = "Pointing to a function.";
    int (*ptr)(char *str);      // A pointer to the function int printString(char *str)

    ptr = printString; // print the current spring

    if (!(*ptr)(str))   // When the int printString() is exited, this is run before finishinf up on the code
    printf("Done!\n");

    return (0);
}

int printString(char *str)
{
    printf("%s\n", str);
    return (0);
}