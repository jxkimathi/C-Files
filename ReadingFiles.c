#include <stdio.h>

int main()
{
    FILE *pF = fopen("poem.txt", "r"); // Opens a file and reads it; r = read
    char buffer[255];                  // Creates a buffer for the file

    if (pF == NULL)                    // If the file does not exist
    printf("Unable to open file!\n");

    else
    {
        while(fgets(buffer, 255, pF) != NULL) // Reads the contents of the file pF and assigns a buffer
        {
            printf("%s\n", buffer);
        }

    }

    fclose(pF); // Closes the file

    return (0);
}