#include <stdio.h>
#include <string.h> // string header file

// use scanf to accept user input
// use fgets when you are working with white spaces in between input

int main()
{
    char name[25]; // 25 bytes
    int age;

    printf("\nWhat's your name? ");
    // scanf("%s", &name); // can't read white spaces

    // Reads through whitespaces in the input
    fgets(name, 25, stdin); // list the var name, the input size and the standard input

    // Getting rid of the white spaces
    name[strlen(name) - 1] = '\0'; // strlen gets string length

    printf("How old are you?: ");
    scanf("%d", &age);

    printf("\nHello %s, How are you?", name);
    printf("\nYou are %d years old", age);

    return (0);
    
}