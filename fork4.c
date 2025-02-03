#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
//POSIX : Portable Operating System Interface provides compatibilty
//between different operating systems.
int main()
{
        int ret=fork();
        printf("Process ID of main function is %u\n",getpid());
        printf("Parent Process ID of main function is %u\n",getppid());

        if(ret<0)
        {
                printf("Child process creation failed\n");
                exit(1);
        }
        else if(ret==0)
        {
                printf("=======INSIDE CHILD PROCESS============\n");
                int num,fact=1;

                printf("Enter the number to find the factorial\n");
                scanf("%d",&num);

                for(int i=1;i<=num;i++)
                {
                        fact=fact*i;
                }

                printf("Factorial of %d is %d\n",num,fact);
        }
        else
        {
                //wait(0);
                printf("============INSIDE PARENT PROCESS==========\n");
                int a;

                printf("Enter the number to check whether it is odd/even\n");
                scanf("%d",&a);

                if(a%2==0)
                {
                        printf("Even\n");
                }
                else
                {
                        printf("Odd\n");
                }
        }

        return 0;// Successful Termination of the program
}
