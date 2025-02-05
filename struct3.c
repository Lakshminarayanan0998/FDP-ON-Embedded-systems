//C program to demonstrate nested structures
#include<stdio.h>

struct Address
{
    char street[50];
    char city[50];
    int pincode;
};

struct Person
{
    char name[50];
    int age;
    struct Address address;//Nested Structure
};

int main()
{
    struct Person p1;

    //Taking the input from user
    printf("Enter Person Name:\n");
    scanf("%[^\n]",p1.name);

    printf("Enter age:\n");
    scanf("%d",&p1.age);

    getchar();
    printf("Enter the street name:\n");
    scanf("%[^\n]",p1.address.street);
    getchar();
    printf("Enter the city name:\n");
    scanf("%[^\n]",p1.address.city);

    printf("Enter the pincode:\n");
    scanf("%d",&p1.address.pincode);

    getchar();

    printf("Printing Person Details...\n");
    printf("Person Name = %s\n",p1.name);
    printf("Person Age = %d\n",p1.age);

    printf("Printing Address Details...\n");
    printf("Street Name = %s\n",p1.address.street);
    printf("City Name = %s\n",p1.address.city);
    printf("Pincode = %d\n",p1.address.pincode);

    return 0;
}
