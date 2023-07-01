#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strCpy(char *str1, char *str2);

int main()
{
    char *str[4] = {"There's music in the sighing of a reed;",
                    "There's music in the gushing of a rill;",
                    "There's music in all things if men had ears",
                    "There earth is but an echo of the spheres.\n"};
    char *ptr;
    int i;
    int termination = 0;

    ptr = malloc((strlen(str[0]) + 1) * sizeof(int)); // Allocates memory of similar length for the ptr 

    if (ptr == NULL)
    {
        printf("Malloc() failed.\n");
        termination = 1;
    }

    else
    {
        strCpy(str[0], ptr); // Copies content of str[0] into ptr
        printf("%s\n", ptr); // Prints the contents of ptr

        for (i = 1; i < 4; i++)
        {
            ptr = realloc(ptr, strlen(str[i] + 1) * sizeof(char)); // Reallocates memory of similar length for the ptr

            if (ptr == NULL)
            {
                printf("Realloc() failed.\n");
                termination = 1;
                i = 4;  // break the for loop
            }

            else{
                strCpy(str[i], ptr); // Copies contents of str[i] to ptr
                printf("%s\n", ptr); // Prints the contents of ptr
            }
        }
    }

    free(ptr); // Frees the bytes under ptr
    // realloc(ptr, 0); // similar to free

    return (termination);
}

void strCpy(char *str1, char *str2) // similar to strcpy
{
    int i;

    for (i = 0; str1[i]; i++)
    str2[i] = str1[i];

    str2[i] = '\0';
}