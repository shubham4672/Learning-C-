// Array is a data structure where we can store a bunch of different values
// But the array elements does not have a name like variables
#include <stdio.h>
int main()
{
    char pharse[20] = "Array";
    int luckyNumbers[] = {10, 11, 12, 23, 25};
    int classes[10];
    luckyNumbers[1] = 200;         // Modified
    printf("%d\n", luckyNumbers[0]); // Index
    printf("%d\n", luckyNumbers[1]); // Index
    printf("%d\n", luckyNumbers[2]); // Index
    printf("%d\n", luckyNumbers[3]); // Index
    printf("%d\n\n", luckyNumbers[4]); // Index

    printf("%d\n", classes[3]);  // 2001002864
    classes[3] = 4;
    printf("%d\n", classes[3]);
    printf("%s", pharse);
    return 0;
}