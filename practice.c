#include <stdio.h>
#include <string.h>

// THE CODE FORCES A USER TO ENTER A USER NAME TO PROCEED STARTS HEREE
int main() {
    char name[25];
    printf("What is your name: ");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';
    while(strlen (name) == 0)
    {
       printf("You didnt enter your name!\n");
       printf("What is your name: ");
       fgets(name, 25, stdin);
       name[strlen(name) -1] = '\0';
    }
    printf("Hello %s, how are you today!\n", name);
    return 0;
}
// // THE CODE FORCES A USER TO ENTER A USER NAME TO PROCEED  ENDS HERE