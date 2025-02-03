#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size;
	
        int *ptr=NULL;

	

	printf("Enter the size of array: \n");
	scanf("%d",&size);

	ptr=(int*)malloc(size*sizeof(int));
	
	if(ptr==NULL)
	{
		printf("Memory Allocation Failed\n");
		exit(1);
	}
	
	//Intializing the array elements
	for(int i=0;i<size;i++)
	{
		ptr[i]=i+1;
	}		
	
	printf("Array elements are ......\n");
	for(int i=0;i<size;i++)
	{
		printf(" %d",ptr[i]);
	}
	printf("\n");	
	
	free(ptr);
	
	return 0;
	
	}
	
