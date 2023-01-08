#include <stdio.h>
int main()
{
    functionName("Shubham", 19);
    functionName("Mike", 22);
    functionName("Tom", 10);
    return 0;
}
void functionName(char name[], int age){
    printf("Hello %s, you're %d\n", name, age);
}
