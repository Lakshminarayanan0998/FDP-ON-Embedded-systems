#include<stdio.h>
#include<stdlib.h>

struct node
{
        int data;
        struct node *next;  // *next is a pointer that holds address of the next node
}*head;

// head is a global pointer to the first node (head) of the linked list

// Function Prototypes
void createlist(int n);
void traverse();

int main()
{
        int n;

        printf("Enter total number of nodes to be created: ");
        scanf("%d", &n);

        createlist(n);

        printf("Linked List elements are...\n");
        traverse();

        return 0;
}

void createlist(int n)
{
        struct node *newnode, *temp;
        // newnode is used to create new nodes

        head = (struct node*)malloc(sizeof(struct node));

        if(head == NULL)
        {
                printf("Memory Allocation Failed\n");
                exit(1);
        }

        int data;

        printf("Enter the data for the first node (head): ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;

        temp = head;

        // Creating new nodes
        for(int i = 2; i <= n; i++)
        {
                newnode = (struct node*)malloc(sizeof(struct node));
                if(newnode == NULL)
                {
                        printf("Memory Allocation Failed\n");
                        break;
                }

                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);

                newnode->data = data;
                newnode->next = NULL;

                temp->next = newnode;  // Link the new node
                temp = temp->next;      // Update temp to the new node
        }
}

void traverse()
{
        struct node *temp;

        if(head == NULL)
        {
                printf("List is empty\n");
                return;
        }
        temp = head;

        while(temp != NULL)
        {
                printf("Data = %d, Address = %p\n", temp->data, temp);  // Print data and address of the node
                temp = temp->next;  // Move to the next node
        }
}
