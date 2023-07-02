#include <stdio.h>

struct computer
{
    float cost;
    int year;
    int cpu_speed;
    char cpu_type[16];
};

typedef struct computer SC; // Gives the structure computer a synonym, SC

SC dataReceive(SC s); // A function with a structure parameter that returns a structure

int main()
{
    SC model; // A structure variable called model

    model = dataReceive(model);

    printf("Here's what you entered: \n");
    printf("Year: %d\n", model.year);
    printf("Cost: $%.2f\n", model.cost);
    printf("CPU type: %s\n", model.cpu_type);
    printf("CPU speed: %d\n", model.cpu_speed);

    return (0);
}

SC dataReceive(SC s)
{
    printf("The type of CPU in your computer: ");
    gets(s.cpu_type);

    printf("The speed(MHz) of the CPU: ");
    scanf("%d", &s.cpu_speed);

    printf("The year your computer was made: ");
    scanf("%d", &s.year);

    printf("The cost of your computer: $");
    scanf("%f", &s.cost);

    return (s);   
}