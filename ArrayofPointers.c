#include <stdio.h>

void printString(char **str1, int size);
void stringPrint(char *str2);

int main()
{
    char *str[4] = {"There's music in the sighing of a reed;",
                    "There's music in the gushing of a rill;",
                    "There's music in all things if men had ears;",
                    "There earth is but an echo of the spheres.\n"};

    int i, size = 4;

    printString(str, size);

    for (i = 0; i < size; i++)
    stringPrint(str[i]);
}

void printString(char **str1, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%s\n", str1[i]);
    }
}

void stringPrint(char *str2)
{
    printf("%s\n", str2);
}