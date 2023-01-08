#include <stdio.h>

double cube(double num)
{
    double result = num * num * num;
    printf("May gets printed.");
    return result;
    printf("Doesn't get printed on the terminal");
}
int main()
{
    printf("Answer: %f", cube(7.0));
    return 0;
}