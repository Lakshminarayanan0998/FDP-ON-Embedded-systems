//C program to demonstrate the working of a pointer

#include<stdio.h>

int main()
{
    int a=10,b=20;

    int *ptr=&a;

    printf("Value of a without using a pointer = %d\n",a);
    printf("Value of a using pointer = %d\n",*ptr);

    printf("Address of a without using a pointer = %p\n",&a);
    printf("Address of a using a pointer = %p\n",ptr);

    ptr=&b;

    printf("Value of b without using a pointer = %d\n",b);
    printf("Value of b using pointer = %d\n",*ptr);

    printf("Address of b without using a pointer = %p\n",&b);
    printf("Address of b using pointer = %p\n",ptr);

    printf("Address of pointer to integer = %p\n",&ptr);

    return 0;
}
