#include <stdio.h>

struct computer
{
    float cost;
    int year;
    int cpu_speed;
    char cpu_type[16];
};

typedef struct computer SC;

void dataReceive(SC *ptr); // Function that takes in a structure pointer

int main()
{
    SC model;

    dataReceive(&model); // Puts the values into the address of structure model

    printf("Here's what you entered:\n");
    printf("Year: %d\n", model.year);
    printf("Cost: $%.2f\n", model.cost);
    printf("CPU type: %s\n", model.cpu_type);
    printf("CPU speed: %d\n", model.cpu_speed);

    return (0);
}

void dataReceive(SC *ptr)
{
    printf("The type of CPU inside your computer: ");
    gets((*ptr).cpu_type);

    printf("The speed(MHz) of the CPU: ");
    scanf("%d", &(*ptr).cpu_speed);

    printf("The year the computer was made: ");
    scanf("%d", &(*ptr).year);

    printf("The cost of the computer: $");
    scanf("%f", &(*ptr).cost);
}