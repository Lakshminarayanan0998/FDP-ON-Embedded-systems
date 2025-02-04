//C program to print the size of different pointer types
#include<stdio.h>

int main()
{
    int i;
    char c;
    float f;
    double d;
    char arr[]="NIITE MEENAKSHI INSTITUTE OF TECHNOLOGY";

    int *intptr=&i;
    char *chrptr=&c;
    float *fltptr=&f;
        double *dblptr=&d;
    char *strptr=arr;

    printf("Size of pointer to int = %lu bytes\n",sizeof(intptr));
    printf("Size of pointer to char =%lu bytes\n",sizeof(chrptr));
    printf("Size of pointer to float = %lu bytes\n",sizeof(fltptr));
    printf("Size of pointer to double = %lu bytes\n",sizeof(dblptr));
    printf("Size of char arr = %lu bytes\n",sizeof(arr)-1);
    printf("Size of pointer to char array = %lu bytes\n",sizeof(strptr));
   
    printf("\n");
   
    printf("Size of int = %lu bytes\n",sizeof(*intptr));
    printf("Size of char =%lu bytes\n",sizeof(*chrptr));
    printf("Size of float = %lu bytes\n",sizeof(*fltptr));
    printf("Size of double = %lu bytes\n",sizeof(*dblptr));
    printf("Size of char arr = %lu bytes\n",sizeof(arr)-1);
    return 0;
}
