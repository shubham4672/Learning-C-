// 1) Write a program to enter two numbers and perform all arithmetic operations
/* #include <stdio.h>
int main()
{
    double num1, num2;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    // Addition
    printf("Sum of first and second number is: %f\n", num1 + num2);
    // Subtraction
    printf("Subtracting from num1 will be: %f\n", num1 - num2);
    // Multiplication
    printf("Multiplication of first and second number is: %f\n", num1 * num2);
    // Division
    printf("Division will give: %f\n", num1 / num2);
    // Modulus
    int num3, num4;
    printf("Enter first number: ");
    scanf("%d", &num3);
    printf("Enter second number: ");
    scanf("%d", &num4);
    printf("Modulus will be: %d", num3 % num4); */

// 2) Write  a program to enter length and breadth of a rectangle and find the area and perimeter
/* #include <stdio.h>
int main()
{
    double length, breadth;
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%lf", &breadth);

    printf("The area of the rectangle is: %f\n", length*breadth);
    printf("The perimeter of the rectangle is: %f\n", 2*(length+breadth)); */

// 3) Write a program to enter radius of a circle and find the circumference and area.
/* #include <stdio.h>
int main()
{
    double const PI=3.14;
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    printf("Area of the circle is: %f\n", PI*radius*radius);
    printf("Circumference of the circle is: %f\n", 2*PI*radius); */

// 4) Write a program to enter temperature in Celcius and convert to Fahrenheit.
/* #include <stdio.h>
int main()
{
    double celcius, fahrenhiet;
    printf("Enter temperature in celcius: ");
    scanf("%lf", &celcius);
    fahrenhiet=(celcius*1.8)+32;
    printf("Temperature in Fahrenheit is: %0.1fF", fahrenhiet); */

// 5) Write a program to enter temperature in Fahrenheit and convert it to celsius.
/* #include <stdio.h>
int main()
{
    double celcuis, fahrenhiet;
    printf("Enter temperature in Fahrenhiet: ");
    scanf("%lf", &fahrenhiet);
    celcuis=0.55555555555*(fahrenhiet-32);
    printf("Temperature in Celsius is: %0.2fC", celcuis); */

// 6) Write a program to enter base and height of a triangle and find the area.
/* #include <stdio.h>
int main()
{
    double height, base;
    printf("Enter the base of the triangle: ");
    scanf("%lf", &base);
    printf("Enter the height of the triangle: ");
    scanf("%lf", &height);

    printf("The area of the triangle is: %0.2f", 0.5*height*base); */

// 7) Write a program to enter marks of three subjects and calculate total and average.
/* #include <stdio.h>
int main()
{
    double mark1, mark2, mark3;
    double total, average;
    printf("Enter the marks in first subject: ");
    scanf("%lf", &mark1);
    printf("Enter the marks in second subject: ");
    scanf("%lf", &mark2);
    printf("Enter the marks in third subject: ");
    scanf("%lf", &mark3);
    total = mark1 + mark2 + mark3;
    average = (total) / 3;

    printf("Total marks are: %0.2f. ", total);
    printf("Average is: %0.2f", average); */

// 8) Write a program to enter principal, time and rate of interest and calculate simple interest.
/* #include <stdio.h>
int main()
{
    int principal, time, rate_of_interest;
    double Simple_interest;
    printf("Enter the value of principal: ");
    scanf("%d", &principal);
    printf("Enter the time: ");
    scanf("%d", &time);
    printf("Enter the rate of interest: ");
    scanf("%d", &rate_of_interest);

    Simple_interest = (principal* rate_of_interest*time)/100;
    printf("Simple interest will be: %0.0f", Simple_interest);*/

// 9) Write a program to convert specified days into years, weeks and days. (Ignore leap year).
    /* #include <stdio.h>
    int main()
    {
        int total, day, year, week;
        printf("Enter the number of days: ");
        scanf("%d", &total);
        year = total / 365;
        week = (total%365)/7;
        day = (total%365)%7;
        printf("%d is equvalent to %d years, %d weeks and %d days\n", total, year, week, day); */



// 10) Print the last 3 digits of a given number e.g. for 45902, print 9, 0 and 2 in 3 different lines.
    #include <stdio.h>
    int main()
    {
        
        return 0;
    }