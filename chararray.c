#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size;
    char *chrarray;

    printf("Enter the number of characters:\n");
    scanf("%d",&size);

    chrarray=(char*)malloc((size+1)*sizeof(char));

    if(chrarray==NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the string:\n");
    scanf(" ");//To clear the newline left in the buffer
    fgets(chrarray,size+1,stdin);

    printf("Entered String : %s\n",chrarray);

    free(chrarray);

    return 0;
}
