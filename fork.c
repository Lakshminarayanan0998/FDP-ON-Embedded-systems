#include<stdio.h>
#include<unistd.h>
//POSIX : Portable OPerating System Interface Provides Compatibility
//between different operating system.
int main()
{
	printf("Process ID of main function is %u\n",getpid());
	return 0;
}	
