#include <stdio.h>

// I want to write the three verses of the birthday song
// instead of writing using printf mant times i just write the verse in a function
// then i call that function three times in the main function.

void birthday() // a new function to be used beside the main function
{
    printf("Happy birthday to you!\n");
    printf("Happy birthday to you!\n");
    printf("Happy birthday dear....YOU!\n");
    printf("Happy birthday to you!\n");
    printf("\n");
}

int main()
{

    birthday(); // calling the birthday function; it saves time of having
    birthday(); //             to write many statements that are written.
    birthday();

    return (0);

}