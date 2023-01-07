#include <stdio.h>
int main()
{
    int age;
    char fullName[20];
    char name[50] = "Shubham Sharma";
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your full name: ");
    scanf("%s",fullName);
    // fgets(fullName, 50, stdin);
    printf("Your name is %s\n", name);
    printf("You're full name is: %s\t", fullName);
    printf("You're %d years old.", age);
    return 0;
}