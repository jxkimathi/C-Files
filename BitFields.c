#include <stdio.h>
#include <string.h>

// Bit Field = A small object that allows access to a single bit.
//           - A bit can only hold one of two values, either 1 or 0.

struct bit_field // Bit field of int data type
{
    int cable: 1; // Returns 1 for true and 0 for false
    int dish: 1;
};

struct survey
{
    char name[20];
    struct bit_field c_d;
    int age;
    int hr_per_week;

    union
    {
        char cable_company[16];
        char dish_company[16];
    } provider;
};

void dataEnter(struct survey *ptr);
void dataDisplay(struct survey *ptr);

int main()
{
    struct survey TV;

    dataEnter(&TV);
    dataDisplay(&TV);

    return (0);
}

void dataEnter(struct survey *ptr)
{
    char is_yes[4];

    printf("Are you using cable at home (Y or N)?: ");
    gets(is_yes);

    if (is_yes[0] == 'Y' || is_yes[0] == 'y')
    {
        printf("Name of your cable company: ");
        gets(ptr->provider.cable_company);

        ptr->c_d.cable = 1;
        ptr->c_d.dish = 0;
    }

    else
    {
        printf("Are you using a satellite dish at home (Y or N)?: ");
        gets(is_yes);

        if (is_yes[0] == 'y' || is_yes[0] == 'Y')
        {
            printf("Name of your satellite dish company: ");
            gets(ptr->provider.dish_company);

            ptr->c_d.cable = 0;
            ptr->c_d.dish = 1;
        }

        else
        {
            ptr->c_d.cable = 0;
            ptr->c_d.dish = 0;
        }
    }

    printf("Enter your name: ");
    gets(ptr->name);

    printf("Enter your age: ");
    scanf("%d", &ptr->age);

    printf("How many hours per week do you spend watching TV?: ");
    scanf("%d", &ptr->hr_per_week);

    printf("\n");
}

void dataDisplay(struct survey *ptr)
{
    printf("Here's what you entered: \n");
    printf("Your name: %s\n", ptr->name);
    printf("Your age: %d\n", ptr->age);
    printf("Hours spent watching TV per week: %d\n", ptr->hr_per_week);

    if (ptr->c_d.cable && !ptr->c_d.dish)
    printf("Your cable provider: %s\n", ptr->provider.cable_company);

    if (ptr->c_d.dish && !ptr->c_d.cable)
    printf("Your satellite dish provider: %s\n", ptr->provider.dish_company);

    if (!ptr->c_d.cable && !ptr->c_d.dish)
    printf("You have no cable or satellite dish provider!\n");

    printf("Thank You and Bye!\n");
}