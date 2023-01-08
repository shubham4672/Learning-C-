// Program to convert given number of days in terms of Years, Weeks and Days

/* Approach :  

Number of years will be the quotient when number of days will be divided by 365 i.e days / 365 = years.
Number of weeks will be the result of (Number_of_days % 365) / 7.
Number of days will be the result of (Number_of_days % 365) % 7. */
#include <stdio.h>
#define DAYS_IN_WEEK 7
 
// Function to find year,
// week, days
void find(int number_of_days)
{
    int year, week, days;
     
    // Assume that years is of 365 days
    year = number_of_days / 365;
    week = (number_of_days % 365) /
            DAYS_IN_WEEK;
    days = (number_of_days % 365) %
            DAYS_IN_WEEK;
    printf("years = %d",year);
    printf("\nweeks = %d", week);
    printf("\ndays = %d ",days);    
}
 
// Driver Code
int main()
{
    int number_of_days = 200;
    find(number_of_days);
    return 0;
}