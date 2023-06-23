#include <stdio.h>
#include <string.h>

struct Player
{
    char name[12];
    int score;
};

int main()
{
    // struct = Collection of related members ("variables")
    //        - They can be of different data types
    //        - They are listed under one block of memory
    //        - Very similar to classes in other languages but cannot contain any methods

    struct Player player1;        // Assigning player1 his own name and score
    struct Player player2;        // Assigning player2 his own name and score

    strcpy(player1.name, "Jude"); // Copying the name into player1
    player1.score = 4;            // Copying the score into player1

    strcpy(player2.name, "Escriva"); // Copying the name intto player2
    player2.score = 5;               // Copying the score into player2

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);

    return (0);
}