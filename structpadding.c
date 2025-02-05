#include<stdio.h>

struct Random
{
    char c;//1 bytes
    double m;
    char d;
    char e;
    char fe;
    char z;
    int i;//4 bytes
    char dd;
    float f;//4 b
};

int main()
{
    struct Random r1;

    printf("Size of Structure = %lu\n",sizeof(r1));

    return 0;
}
