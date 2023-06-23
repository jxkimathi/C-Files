#include <stdio.h>

/*main - Prints the multiplication table of a certain number*/

int main()
{
    int i, num;

    printf("Enter number: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    printf("%d * %d = %d\n", num, i, num * i);

    return (0);
    
}