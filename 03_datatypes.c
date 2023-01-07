/* Data types are what type of information we can represent and use inside
of our c program*/
#include <stdio.h>

int main()
{
    // Integers
    int age = 40;
    double gpa = 9.3;
    char grade = 'O';
    char characters[50] = "Geegle weegle";
    printf("The age of Canaro is %d and his degree is %s. And Grade is %c with gpa %g. At last he is happy.\n", age, characters, grade, gpa);
    return 0;
}