//C program to demonstrate array traversal using pointers

#include<stdio.h>

int main()
{
    int arr[5]={10,20,30,40,50};

    //Pointer Declaration and Initialization
    int *ptr=arr; //Pointer points to base address(index 0)
             
    printf("Printing original array elements...\n");
    for(int i=0;i<5;i++)
    {
        printf("Value of a[%d] = %d\n",i,*ptr);
        printf("Address of a[%d] = %p\n",i,ptr);
        ptr++;
    }

    //Modifying the array elements using pointer
    //Reset the pointer to base address
    ptr=arr;

    for(int i=0;i<5;i++)
    {
        *ptr +=5;
        ptr++;
    }
   
    ptr=arr;
    printf("Printing the updated array elements...\n");
    for(int i=0;i<5;i++)
    {
        printf("Value of a[%d] = %d\n",i,*ptr);
        printf("Address of a[%d] = %p\n",i,ptr);
        ptr++;
    }

    return 0;
}
