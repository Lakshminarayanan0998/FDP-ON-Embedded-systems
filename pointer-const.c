//C program to demonstrate pointer to constant

#include<stdio.h>

int main()
{
    int a=10,b=20;

    //Pointer to constant declaration
    const int *ptr=&a;

    printf("Value of a = %d, Address = %p\n",*ptr,ptr);

//    *ptr=11; //Error
     *ptr=21;
    ptr=&b;
    printf("Value of b = %d, Address = %p\n",*ptr,ptr);

    return 0;
}
