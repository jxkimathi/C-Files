#include <stdio.h>

/*main - Program for increment and decrement operator*/

int main(void)
{
    int x;

    printf("Enter the number you wish to increment and decrement: ");
    scanf("%d", &x);

    ++x;
    printf("Pre increment, x = %d\n", x);

    --x;
    printf("Pre decrement, x = %d\n", x);

    x++;
    printf("Post increment, x = %d\n", x);

    x--;
    printf("Post decrement, x = %d\n", x);

    return (0);
    
}