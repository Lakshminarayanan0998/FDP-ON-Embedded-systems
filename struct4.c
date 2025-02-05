#include<stdio.h>

struct Student
{
    char stud_name[50];
    int age;
    float marks;
};

int main()
{
    struct Student *ptr;
    struct Student s1;

    //ptr=&s1;

    printf("Size of pointer to structure = %lu bytes\n",sizeof(ptr));
    printf("Address of s1 = %p\n",&s1);
    printf("Address of stud_name = %p\n",&s1.stud_name);
    printf("Address of Student Age = %p\n",&s1.age);
    printf("Address of Student Marks = %p\n",&s1.marks);

    return 0;
}
