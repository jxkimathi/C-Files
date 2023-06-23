#include <stdio.h>

/*main - Prints the alphabet in lowercase*/

int main(void)
{
    char c;

    c = 'a';
    while (c >= 'a' && c <= 'z')
    {
        putchar(c);
        c++;
    }

    return (0);
    
}