#include <stdio.h>
#include <stdlib.h>

int n; // global
int main() // main in text
{   int m; // local
    int *p;
    p = (int *) malloc (sizeof (int)); // allocated from heap
    printf("Stack %p\n", &m);
    printf("heap %p\n",  p);
    printf("Data %p\n", &n);
    printf("Text %p\n", main);
    return 0;
}
