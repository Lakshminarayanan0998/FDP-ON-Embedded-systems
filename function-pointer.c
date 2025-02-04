//Function Pointer: It is a pointer that holds the address
//of the function
#include<stdio.h>

//Function Prototype
void myfunction();

int main()
{
    void (*funcptr)()=myfunction;

    printf("Address = %p\n",myfunction);
    printf("Address = %p\n",funcptr);

    printf("Address of function pointer = %p\n",&funcptr);

    return 0;
}

void myfunction()
{
    printf("Hello from myfunction()\n");
}
