#include <stdio.h>
#include <stdbool.h>

int main()
{
    // logical operator - ! (NOT) reverses the state of a condition

    bool sunny = false; // could also use sunny = 1 or just sunny
    
    if (!sunny)
    printf("It's cloudy outside!\n");

    else
    printf("It's sunny outside!\n");

    return (0);

}