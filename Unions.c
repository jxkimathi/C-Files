#include <stdio.h>
#include <string.h>

// Unions = Block of memory used to hold data arguments of different types.
//        - They share the same memory block.
//        - They are similar to structures in a lot of ways.
//        - You must assign and print out the values else all data arguments will be overwritten by the last value.

struct survey
{
    char name[20];
    char c_d;
    int age;
    int hour_per_week;
    
    union // A union declared within a struct
    {
        char cable_company[16];
        char dish_company[16];
    } provider;    
};

void dataEnter(struct survey *s);
void dataDisplay(struct survey *s);

int main()
{
    struct survey tv;

    dataEnter(&tv);
    dataDisplay(&tv);

    return (0);
}

void dataEnter(struct survey *ptr)
{
    char is_yes[4];

    printf("Are you using cable at home? (Y or N): ");
    gets(is_yes);

    if (is_yes[0] == 'Y' || is_yes[0] == 'y')
    {
        printf("Enter the cable company name: ");
        gets(ptr->provider.cable_company);
        ptr->c_d = 'c';
    }

    else
    {
        printf("Are you using satellite dish at home? (Y or N): ");
        gets(is_yes);

        if (is_yes[0] == 'Y' || is_yes[0] == 'y')
        {
            printf("Enter the dish company name: ");
            gets(ptr->provider.dish_company);
            ptr->c_d = 'c';
        }

        if (is_yes[0] == 'N' || is_yes[0] == 'n')
        ptr->c_d = 'p';
    }

    printf("Please enter your name: ");
    gets(ptr->name);
    printf("Your age: ");
    scanf("%d", &ptr->age);
    printf("How many hours you spend watching TV per week: ");
    scanf("%d", &ptr->hour_per_week);
}

void dataDisplay(struct survey *ptr)
{
    printf("Here's what you entered: \n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Hours per week: %d\n", ptr->hour_per_week);

    if (ptr->c_d == 'c')
    printf("Your cable company name is: %s\n", ptr->provider.cable_company);

    if (ptr->c_d == 'd')
    printf("Your satellite dish company is: %s\n", ptr->provider.dish_company);

    if (ptr->c_d == 'p')
    printf("You have no satellite or cable company.\n");

    printf("Thanks and Bye!\n");
}