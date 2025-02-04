//C program to demonstrate NULL Pointer

#include<stdio.h>

int main()
{

    int *ptr=NULL;

    printf("Value of ptr = %p\n",ptr);

    if(ptr==NULL)
    {
        printf("NULL Pointer. Cannot be dereferenced\n");
    }
    else
    {
        printf("Value = %d\n",*ptr);
    }
    return 0;
}
