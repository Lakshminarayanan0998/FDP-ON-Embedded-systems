#include<stdio.h>

//Function Prototypes
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float div(int a, int b);

int main()
{
    int choice,num1,num2;

    int result_int;//To store results of add/sub/mul
    float result_float;//To store result of div

    //Function Pointer Declaration
    int (*operation_int)(int,int)=NULL;//For add/sub/mul

    float (*operation_float)(int,int)=NULL;//For div operation

    printf("Enter the values of num1 and num2:\n");
    scanf("%d %d",&num1,&num2);

    printf("Select an option:\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: operation_int=add;
            result_int=operation_int(num1,num2);
            printf("Result = %d\n",result_int);
            break;

        case 2: operation_int=sub;
            result_int=operation_int(num1,num2);
            printf("Result = %d\n",result_int);
            break;

        case 3: operation_int=mul;
            result_int=operation_int(num1,num2);
            printf("Result = %d\n",result_int);
            break;

        case 4: if(num2==0)
            {
                printf("Floating point exception\n");
                return 1;
            }
            operation_float=div;
            result_float=operation_float(num1,num2);
            printf("Result = %.2f\n",result_float);
            break;

        default: printf("Invalid Choice. Please check!");
             return 1;
    }
    return 0;
}

int add(int a, int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int mul(int a, int b)
{
    return a*b;
}

float div(int a, int b)
{
    return (float)a/b;
}
