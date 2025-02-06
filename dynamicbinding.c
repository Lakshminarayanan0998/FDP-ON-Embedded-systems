//dynamic binding:

#include <stdio.h>

// Function declarations
void printMessageA();
void printMessageB();

// Function pointer declaration
void (*functionPtr)();

// Function A
void printMessageA() {
    printf("This is function A called via dynamic binding.\n");
}

// Function B
void printMessageB() {
    printf("This is function B called via dynamic binding.\n");
}

int main() {
    int choice;

    // Ask user to choose a function
    printf("Enter 1 for function A or 2 for function B: ");
    scanf("%d", &choice);

    // Dynamic binding based on user's choice
    if (choice == 1)
    {
        functionPtr = &printMessageA;  // Point to function A
    } else if (choice == 2)
    {
        functionPtr = &printMessageB;  // Point to function B
    } else
    {
        printf("Invalid choice! Please enter 1 or 2.\n");
        return 1;
    }

    // Calling the selected function
    functionPtr();  // The function call is resolved at runtime

    return 0;
}
