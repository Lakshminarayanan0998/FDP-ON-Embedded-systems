#include<stdio.h>
#include<string.h>

union misc
{
    int i;
    double f;
};

int main()
{
    union misc data;

    printf("Size of union is %lu\n",sizeof(data));

    printf("The address of union members...\n");
    printf("Address of i = %p\n",&data.i);
    printf("Address of f = %p\n",&data.f);

    return 0;
}
