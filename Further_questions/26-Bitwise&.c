#include <stdio.h>

// main - A program that shhows the use of bitwise & 

int main()
{
    int c, d;

    printf("Enter the first digit: ");
    scanf("%d", &c);

    printf("Enter the second digit: ");
    scanf("%d", &d);

    printf("%d & %d = %d\n", c, d, (c & d));

    return (0);
}