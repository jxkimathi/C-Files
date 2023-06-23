#include <stdio.h>
#include <string.h>

int main()
{
    // while loop = Repeats a section of code possibly unlimited times
    // WHILE some conditions remain true
    // a while loop might not execute at all
    
    char name[25];

    printf("What's your name?: ");
    fgets(name, 25, stdin); // variable name, size of input in bytes, standard input

    name[strlen(name) - 1] = '\0'; // getting rid of the newline character

    while (strlen(name) == 0) // if no name is put in it will run the loop until the name is put in
    {
        printf("You did not enter your name! \n");
        printf("What's your name?: \n");
        fgets(name, 25, stdin); 

        name[strlen(name) - 1] = '\0';
    }

    printf("Hello, %s\n", name);


    return (0);

}