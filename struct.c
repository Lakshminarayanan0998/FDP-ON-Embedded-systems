//C program to demonstrate structures

#include<stdio.h>

struct Student
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    //s1 is the variable of structure student
    struct Student s1={"Vinod Sir",35,89.99};

    printf("Printing the Student Details...\n");
    printf("Student Name = %s\n",s1.name);
    printf("Student Age = %d\n",s1.age);
    printf("Student Marks = %.2f\n",s1.marks);

    return 0;
}
