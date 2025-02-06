//mmap1.c

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/mman.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=open("sample.txt",O_RDONLY, S_IRUSR | S_IWUSR);
   
    struct stat sb;
   
    //fstat() function gets the status info about the file & stores the information in the memory
    if(fstat(fd,&sb)==-1)
    {
        printf("Couldn't get the file size\n");
    }
    else
    {
        printf("File size is %ld\n",sb.st_size);

    }
    char *file_in_memory=mmap(NULL,sb.st_size,PROT_READ,MAP_PRIVATE,fd,0);

    printf("Printing file, as an array of characters..\n");
    for(int i=0;i<sb.st_size;i++)
    {
        printf("%c",file_in_memory[i]);
    }
    printf("\n");

    munmap(file_in_memory,sb.st_size);
    close(fd);

    return 0;
}
