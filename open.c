#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
        //O_WRONLY: write only, S_IRUSR-Read user and Write user perm.
        int fd=open("sample.txt",O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);

        if(fd<0)
        {
                printf("Failed to create sample.txt\n");
                exit(1);
        }
        else
        {
                int w=write(fd,"Niite Meenakshi Institute of Technology",40);

                if(w<0)
                {
                        printf("Write failed\n");
                        exit(1);
                }
                else
                {
                        char buffer[40];

                        int fd2=open("sample.txt",O_RDONLY);

                        if(fd2<0)
                        {
                                printf("Failed to open the file\n");
                                exit(1);
                        }
                        else
                        {
                                read(fd2,buffer,sizeof(buffer));

                                printf("Content read from the file sample.txt is %s\n",buffer);
                        }
                        close(fd2);
                }
                close(fd);
        }
    return 0;
}
