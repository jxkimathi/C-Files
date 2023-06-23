#include <stdio.h>

int main()
{
    // If statements are used to add choices to a program

    int age;
    
    // signing up for a credit card
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    printf("You are now signed up!\n");

    else if (age == 0)
    printf("You can't sign up, you were just born!\n");

    else if (age < 0)
    printf("You haven't been born yet!\n");

    else
    printf("You are not eligible for signing up!\n");

    return (0);

}