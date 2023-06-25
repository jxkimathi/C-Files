#include <stdio.h>

int main()
{
    
    FILE *pF = fopen("Test.txt", "a"); // write = w; append = a;

    fprintf(pF, "Patrick Starr\n"); // What to write into the file

    fclose(pF); // Always close the file
    
/*
   if (remove("Test.txt") == 0)                     // Deletes a file
    printf("That file was deleted sucessfully!\n");
   

   else
    printf("That file was not deleted!\n");
   
*/
    return (0);
}