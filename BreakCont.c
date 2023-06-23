#include <stdio.h>

int main()
{
    // continue = skips the rest of the code and forces the next iteration of the loop
    // break = exits a loop/ switch

    int i;

    for (i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            break;               // only reaches 12 before completely exiting the loop
            // continue;         // skips 13 and proceeds to the next one
        }
        printf("%d\n", i);
    }


    return (0);
}