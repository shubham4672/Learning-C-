// the words after space should also be printed
#include <stdio.h>
int main(){
    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s", name);
return 0;
}