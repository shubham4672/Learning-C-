// Data structure
#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    {
        // student1.name = "Ashima"; can't do. Therefore, we use string copy function.
        student1.age = 22;
        student1.gpa = 3.2;
        strcpy(student1.name, "Ashima");
        strcpy(student1.major, "IPS");
    };
    struct Student student2;
    {
        // student1.name = "Ashima"; can't do. Therefore, we use string copy function.
        student2.age = 25;
        student2.gpa = 8.2;
        strcpy(student2.name, "Bhumi");
        strcpy(student2.major, "Coder");
    };
    printf("%s\n", student1.name);
    printf("%s\n", student1.major);
    printf("%d\n", student1.age);
    printf("%0.2f\n\n", student1.gpa);

    printf("%s\n", student2.name);
    printf("%s\n", student2.major);
    printf("%d\n", student2.age);
    printf("%0.2f\n", student2.gpa);
    return 0;
}