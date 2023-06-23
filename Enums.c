#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thur = 5, Fri = 6, Sat = 7};

int main()
{
    // Enumerations = A user defined type of named integer identifiers
    //              - They help to make a program more readable

    enum Day today = Sun;

    // printf("%d\n", today); // Enums are NOT STRINGS, but they can be treated as integers

    if (today == Sun || today == Fri || today == Sat)
    printf("It's the weekend! Party Time!\n");

    else
    printf("I have to work today!\n");

    return (0);
}