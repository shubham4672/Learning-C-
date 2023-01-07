// To store information which we'll use in our code.
#include <stdio.h>
int main()
{
    char characterName[] = "John";
    int characterAge = 67;
    /* Here these %s and %d act as a placeholder for the variables
    written after comma. */
    printf("There once was a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);

    characterAge = 45; // can be modified.
    printf("He really like the name %s\n", characterName);
    printf("but did not like being %d.\n", characterAge);
}