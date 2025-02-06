#include<stdio.h>

struct node {
    int data;
    struct node *next;
};

// Creating nodes statically (Fixed number of nodes)
struct node n1, n2, n3;

int main()
{
    // Assigning values to nodes
    n1.data = 10;
    n1.next = &n2;

    n2.data = 20;
    n2.next = &n3;

    n3.data = 30;
    n3.next = NULL;  // Last node

    // Traversing the list
    struct node *temp = &n1;
    printf("Linked List without malloc():\n");
    while (temp != NULL) {
        printf("Node Address: %p | Data: %d | Next: %p\n", temp, temp->data, temp->next);
        temp = temp->next;
    }
    return 0;
}
