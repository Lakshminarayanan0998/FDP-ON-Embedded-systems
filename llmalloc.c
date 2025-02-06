#include<stdio.h>
#include<stdlib.h>

struct node
{
        int data;
        struct node *next;
}*head;

// Function Prototypes
void createlist(int n);
void insertnodeatbeginning(int data);
void traverse();

int main()
{
        int n, data;

        printf("Enter the number of nodes to be created: ");
        scanf("%d", &n);

        createlist(n);

        printf("Linked List elements are...\n");
        traverse();

        printf("Enter the data to be inserted at the beginning node: ");
        scanf("%d", &data);

        insertnodeatbeginning(data);

        printf("Updated Linked List elements are...\n");
        traverse();

        return 0;
}

void createlist(int n)
{
        struct node *newnode, *temp;

        head = (struct node*)malloc(sizeof(struct node));

        if (head == NULL)
        {
                printf("Memory allocation failed\n");
                exit(1);
        }
        else
        {
                int data;

                printf("Enter the data of the first node: ");
                scanf("%d", &data);

                head->data = data;
                head->next = NULL;

                temp = head;

                // New nodes
                for (int i = 2; i <= n; i++)
                {
                        newnode = (struct node*)malloc(sizeof(struct node));

                        if (newnode == NULL)
                        {
                                printf("Memory allocation failed\n");
                                break;
                        }

                        printf("Enter the data of node %d: ", i);
                        scanf("%d", &data);

                        newnode->data = data;
                        newnode->next = NULL;

                        temp->next = newnode;
                        temp = temp->next;
                }
        }
}

void insertnodeatbeginning(int data)
{
        struct node *newnode;

        newnode = (struct node*)malloc(sizeof(struct node));

        if (newnode == NULL)
        {
                printf("Memory allocation failed\n");
                exit(1);
        }
        else
        {
                newnode->data = data;
                newnode->next = head;

                head = newnode;
        }
}

void traverse()
{
        struct node *temp;

        if (head == NULL)
        {
                printf("List is empty\n");
        }
        else
        {
                temp = head;

                while (temp != NULL)
                {
                        printf("Data = %d, Address = %p\n", temp->data, (void*)temp);  // Print data and address of the node
                        temp = temp->next;
                }
        }
}
