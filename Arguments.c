#include <stdio.h>

// arguments - Parameters that make the code work
// You need to include the name and age into the output
// Declare and initialize the variables into the main function
// then put them in the brackets of the birthday function

void birthday(char name[], int age)
{
    printf("Happy birthday dear %s!\n", name);
    printf("You are %d years old!\n", age);
}

int main()
{
    char name[] = "Jude";
    int age = 20;

    birthday(name, age); // You need a matching set of parameters otherwise the code wont work

    return (0);

}