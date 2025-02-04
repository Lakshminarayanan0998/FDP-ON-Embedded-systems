//Constant Pointer: Constant pointer is a pointer that holds the
//address of another variable. But, once the constant pointer
//is initialized, we cannot to re-assign/modify the address.
//But, we can modify the value using dereferencing operator.

#include<stdio.h>

int main()
{
    int a=50,b=60;
    int *const ptr=&a;

    printf("Value of a using ptr = %d, Address = %p\n",*ptr,ptr);

    *ptr=55;
    printf("Modified value using ptr = %d, Address = %p\n",*ptr,ptr);
   
//    ptr=&b;//Throw an error: read-only error

    return 0;
}
