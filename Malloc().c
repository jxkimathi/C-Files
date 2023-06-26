#include <stdio.h>
#include <stdlib.h> // Header file for standard library
#include <string.h> // Header file for string functions

void strCpy(char *str1, char *str2);

int main()
{
    char str[] = "Use malloc() to allocate memory.";
    char *ptr_str;
    int result;

    ptr_str = malloc(strlen(str) + 1);

    if (ptr_str != NULL)
    {
       strCpy(str, ptr_str);
       printf("The string pointed to by ptr_str is: %s\n", ptr_str);
       result = 0;
    }

    else
    {
       printf("malloc() function failed!\n");
       result = 1;
    }

    return (result);
}

void strCpy(char *str1, char *str2)
{
    int i;

    for (i = 0; str1[i]; i++)
    str2[i] = str1[i];

    str2[i] = NULL;
}