#include <stdio.h>
int main()
{
    double num1, num2;
    printf("Enter first number: ");
    scanf("%lf", &num1); // accessing the address of num1
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Sum is: %f", num1 + num2);
    return 0;
}