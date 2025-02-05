//C program to demonstrate stack using arrays
#include<stdio.h>
#include<stdlib.h>

//Function Prototypes
void push(int item);//Insertion
int pop();//Deletion
int peek();//Return the last element inserted of the stack
int isfull();
int isempty();
void display();

#define MAX 5
int stack_arr[MAX];
int top=-1;//Stack is empty

int main()
{
    int item,choice;
   
    while(1)
    {    
        printf("=======STACK OPERATIONS MENU========\n");
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.PEEK: Display last inserted element\n");
        printf("4.DISPLAY\n");
        printf("5.QUIT\n");

        printf("Enter your choice: \n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("Enter the element to be pushed:\n");
                scanf("%d",&item);
                push(item);
                break;

            case 2:item=pop();
                   printf("Popped element is %d\n",item);
                   break;

            case 3:printf("Last inserted item is %d\n",peek());
                   break;

            case 4:display();
                   break;

            case 5:exit(1);

            default: printf("Invalid Choice. Please check!");
        }
    }
    return 0;
}

void push(int item)
{
    if(isfull())
    {
        printf("Stack Overflow\n");
        return;
    }
    top=top+1;
    stack_arr[top]=item;
}

int pop()
{
    int item;

    if(isempty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    item=stack_arr[top];
    top=top-1;
    return item;
}

int isfull()
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
}

int isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

int peek()
{
    if(isempty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack_arr[top];
}

void display()
{
    if(isempty())
    {
        printf("Stack Underflow\n");
        return;
    }

    printf("Stack Elements are...\n");
    for(int i=top;i>=0;i--)
    {
        printf("%d\n",stack_arr[i]);
    }
    printf("\n");
}
