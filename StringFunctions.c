#include <stdio.h> // header file for standard library
#include <string.h> // header file for string functions

int main()
{
    char string1[] = "Jude";
    char string2[] = "Escriva";

    // strlwr(string1);                 // converts a string to lowercase
    // strupr(string1);                 // converts a string to uppercase
    // strcat(string1, string2);        // appends string2 to end of string1
    // strncat(string1, string2, 1);    // appends n characters from string2 to string1 (in this case n = 1)
    // strcpy(string1, string2);        // copy string2 to string1
    // strncpy(string1, string2, 1);    // copy first n characters from string2 to string1 (1 = Eude), (2 = Esde)

    // strset(string1, '?');            // sets all characters of a string to a given character
    // strnset(string1, 'x', 1);        // sets first n characters of a string to a given character
    // strrev(string1);                 // reverses a string

    // int result = strlen(string1);               // returns string length as int
    // int result = strcmp(string1, string2);      // string compare all characters
     int result = strncmp(string1, string2, 1);  // string compare n characters (in this case 1)
    // int result = strcmpi(string1, string1);     // string compare all characters (ignore case)
    // int result = strnicmp(string1, string1, 1); // string compare n characters (ignore case)

    printf("%d\n", result);

    if (result == 0)
    printf("These strings are the same!\n");

    else
    printf("These strings are not the same!\n");

    return (0);

}