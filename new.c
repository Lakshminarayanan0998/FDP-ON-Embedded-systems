#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<stdlib.h>

void myhandle(int signo)
{
    printf("Signal Received : %d\n",signo);
    exit(1);
}
int main()
{
    signal(SIGFPE,myhandle);
    int a=10,b=0,result;

    result=a/b;

    return 0;
}
