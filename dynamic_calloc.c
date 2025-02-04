#include<stdio.h>
#include<stdlib.h>

int main()
{
    int initial_size,new_size;

    int *arr=NULL;

    printf("Enter the initial size:\n");
    scanf("%d",&initial_size);

    //Allocate the memory in heap segment using malloc()
    arr=(int*)calloc(initial_size,sizeof(int));

    if(arr==NULL)
    {
        printf("Memory Allocation Failed\n");
        return 1;
    }

    printf("Printing the array elements without initializing\n");
    for(int i=0;i<initial_size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");

    //Initialize the array elements using scanf
    printf("Enter the %d array elements:\n",initial_size);
    for(int i=0;i<initial_size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Printing the array elements...\n");
    for(int i=0;i<initial_size;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");

    //Resize the array using realloc()
    printf("Enter the new_size:\n");
    scanf("%d",&new_size);

    //Reallocate the memory using realloc()
    arr=(int*)realloc(arr,new_size*sizeof(int));
    if(arr==NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d more elements\n",new_size-initial_size);
    for(int i=initial_size;i<new_size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Printing updated array elements...\n");
    for(int i=0;i<new_size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
