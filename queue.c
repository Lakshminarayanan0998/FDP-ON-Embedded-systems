	
//C program to demonstrate queue using arrays
#include<stdio.h>
#include<stdlib.h>

//Function Prototypes
void enqueue(int item);
int dequeue();
int isfull();
int isempty();
void display();

#define MAX 5
int queue_arr[MAX];
int front=-1,rear=-1;

int main()
{
    int item,choice;

    while(1)
    {
        printf("==========QUEUE OPERATIONS==========\n");
        printf("1.ENQUEUE\n");
        printf("2.DEQUEUE\n");
        printf("3.Display all elements of queue\n");
        printf("4.QUIT\n");

        printf("Enter your choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("Enter the element to be enqueued\n");
                scanf("%d",&item);
                enqueue(item);
                break;

            case 2: item=dequeue();
                printf("Dequeued item is %d\n",item);
                break;

            case 3: display();
                break;

            case 4: exit(1);

            default: printf("Invalid Choice.Please Check!\n");
        }
    }
    return 0;
}

void enqueue(int item)
{
    if(isfull())
    {
        printf("Queue is full\n");
        return;
    }
    if(front==-1)
        front=0;
    rear++;
    queue_arr[rear]=item;
}

int dequeue()
{
    int item;

    if(isempty())
    {
        printf("Queue is empty\n");
        exit(1);
    }
    item=queue_arr[front];

    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front++;
    }
    return item;
}

void display()
{
    if(isempty())
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Printing the Queue elements...\n");
    for(int i=front;i<=rear;i++)
    {
        printf("%d\n",queue_arr[i]);
    }
    printf("\n");
}

int isempty()
{
    return front==-1;
}

int isfull()
{
    return rear==MAX-1;
}
