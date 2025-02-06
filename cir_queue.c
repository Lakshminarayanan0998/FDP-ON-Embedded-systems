#include<stdio.h>
#include<stdbool.h>

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Function to check if the queue is full
bool isFull() {
    return (rear + 1) % SIZE == front;
}

// Function to check if the queue is empty
bool isEmpty() {
    return front == -1 && rear == -1;
}

// Function to add an element to the queue (enqueue)
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full! Cannot enqueue %d.\n", value);
        return;
    }
    if (isEmpty()) {
        front = 0; // Initialize front if the queue is empty
    }
    rear = (rear + 1) % SIZE; // Circular increment
    queue[rear] = value;
    printf("Enqueued %d to the queue.\n", value);
}

// Function to remove an element from the queue (dequeue)
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty! Cannot dequeue.\n");
        return;
    }
    int removedValue = queue[front];
    if (front == rear) {
        // Reset front and rear if the queue becomes empty
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % SIZE; // Circular increment
    }
    printf("Dequeued %d from the queue.\n", removedValue);
}

// Function to display the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    while (i != rear) {
        printf("%d ", queue[i]);
        i = (i + 1) % SIZE; // Circular increment
    }
    printf("%d\n", queue[rear]); // Print the last element
}

int main() {
    int choice, value;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;  // Exit the program
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
