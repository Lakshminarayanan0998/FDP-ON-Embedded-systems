#include<stdio.h>

struct Person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    struct Person p1;

    //Taking input from the user
    printf("Enter person name:\n");
    fgets(p1.name,sizeof(p1.name),stdin);
   
    printf("Enter age:\n");
    scanf("%d",&p1.age);

    printf("Enter salary:\n");
    scanf("%f",&p1.salary);

    printf("Person 1 Details are...\n");
    printf("Person Name = %s\n",p1.name);
    printf("Person Age = %d\n",p1.age);
    printf("Person Salary = %.2f\n",p1.salary);

    struct Person p2;

    getchar();//Clear newline in input buffer
    printf("Enter person 2 name:\n");
    scanf("%[^\n]",p2.name);

    printf("Enter person2 age:\n");
    scanf("%d",&p2.age);

    printf("Enter person2 salary:\n");
    scanf("%f",&p2.salary);

    printf("Person2 details...\n");
    printf("Person2 Name = %s\n",p2.name);
    printf("Person2 Age = %d\n",p2.age);
    printf("Person2 Salary = %.2f\n",p2.salary);

    return 0;
}
