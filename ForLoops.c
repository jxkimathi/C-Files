#include <stdio.h>

int main()
{
    //for loop = Repeats a section of code a limited amount of times

    int index;

    for (index = 10; index >= 1; index -= 2) // index -= 2 decrements by 2
    {
        printf("%d\n", index);
    }

    return (0);

}