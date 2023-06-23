#include <stdio.h>
#include <string.h>

// typedef char user[25];

typedef struct
{
    char name[25];
    char Password[25];
    int id;
} User;               // This can now be used as the variable name ("nickname")

int main()
{
    // Typedef = A reserved keyword that gives an existing data type a "nickname"

    User user1 = {"Jude", "password123", 123456789};
    User user2 = {"Juki", "password321", 987654321};

    printf("Name: %s\n", user1.name);
    printf("Password: %s\n", user1.Password);
    printf("Id: %d\n", user1.id);
    printf("\n");

    printf("Name: %s\n", user2.name);
    printf("Password: %s\n", user2.Password);
    printf("Id: %d\n", user2.id);


    return (0);
}