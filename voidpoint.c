//void pointer: It is a generic pointer that is not associated with any
//data type. But, we can make pointer to hold the address of any data type.
//While printing the value, we need to type cast from void to respective
//data types.

#include<stdio.h>

int main()
{
    int i=10;
    char c='Z';
    float f=3.14;
    char arr[]="Bengaluru";

    void *ptr;

    ptr=&i;
    printf("Value of i = %d\n",*(int*)ptr);

    ptr=&c;
    printf("Value of c = %c\n",*(char*)ptr);

    ptr=&f;
    printf("Value of f = %.2f\n",*(float*)ptr);

    ptr=arr;
    printf("String = %s\n",(char*)ptr);

    return 0;
}
