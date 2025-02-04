#include <stdio.h>
#include <stdlib.h>

// Global variables
int global_initialized = 1; // Initialized data segment (.data)
int global_uninitialized;    // Uninitialized data segment (BSS)

void someFunction() {
    int local_variable; // Stack allocation for a local variable

    printf("Address of local variable in stack: %p\n", (void *)&local_variable);
}

int main(void) {
    // Address of the text section
    printf("Address of text section: %p\n", (void *)main);

    // Addresses of initialized and uninitialized data segments
    printf("Address of global_initialized: %p\n", (void *)&global_initialized);
    printf("Address of global_uninitialized: %p\n", (void *)&global_uninitialized);

    // Dynamic memory allocation for the heap
    int *heap_var = malloc(sizeof(int));
    if (!heap_var) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }
    *heap_var = 42; // Assign a value to the allocated heap memory

    printf("Address of heap variable: %p\n", (void *)heap_var);

    // Call someFunction to print local stack address
    someFunction();

    free(heap_var); // Free dynamically allocated memory on the heap

    return 0;
}
