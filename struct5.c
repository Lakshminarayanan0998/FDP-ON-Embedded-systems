#include<stdio.h>
#include<string.h>

struct Hospital
{
    char patient_name[50];
    int age;
    float blood_level;
};

int main()
{
    struct Hospital h1={"Alice",52,180.90};
    struct Hospital *ptr=&h1;//Pointer to structure
   
    printf("Patient Details...\n");
    printf("Patient Name = %s\n",ptr->patient_name);
    printf("Patient Age = %d\n",ptr->age);
    printf("Patient Blood Level = %.2f\n",ptr->blood_level);

    //Modifying Structure Members using a pointer
    strcpy(ptr->patient_name,"Bob");
    ptr->age=99;
    ptr->blood_level=450.10;

    printf("Printing Modified Structure Details...\n");
    printf("Patient Name = %s\n",ptr->patient_name);
    printf("Patient Age = %d\n",ptr->age);
    printf("Patient Blood Level = %.2f\n",ptr->blood_level);

    return 0;
}
