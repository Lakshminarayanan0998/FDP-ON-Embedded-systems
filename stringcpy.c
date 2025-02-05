#include<stdio.h>
#include<string.h>

int main()
{
    char source[]="Vinod_Sir";
    char destination[50];
   
    strcpy(destination,source);
    printf("Source : %s\n",source);
    printf("Destination : %s\n",destination);
   
    printf("Address : %p\n",source);
    printf("Address : %p\n",destination);

    return 0;
}
