#include <stdio.h>

struct department
{
    int code;
    char name[32];
    char position[16];
};

typedef struct department DPT;

struct employee
{
    DPT d;
    int id;
    char name[32];
};

typedef struct employee EMPLY;

void infoDisplay(EMPLY *ptr);
void infoEnter(EMPLY *ptr);

int main()
{
    EMPLY info = {
                  {1, "Marketing", "Manager"}, 
                  {1, "B. Smith"}
                  };

    printf("Here's a smaple: \n");
    infoDisplay(&info);
    printf("\n");

    infoEnter(&info);
    printf("\n");

    printf("Here's what you entered: \n");
    infoDisplay(&info);

    return (0);
}

void infoDisplay(EMPLY *ptr)
{
    printf("Your name: %s\n", ptr->name);
    printf("ID number: %d\n", ptr->id);
    printf("Dept. name: %s\n", ptr->d.name);
    printf("Dept. code: %d\n", ptr->d.code);
    printf("Your position: %s\n", ptr->d.position);
}

void infoEnter(EMPLY *ptr)
{
    printf("Please enter your details: \n");

    printf("Your name: ");
    gets(ptr->name);

    printf("Your position: ");
    gets(ptr->d.position);

    printf("Dept. name: ");
    gets(ptr->d.name);

    printf("Dept. code: ");
    scanf("%d", &ptr->d.code);

    printf("Your employee ID: ");
    scanf("%d", &ptr->id);
}