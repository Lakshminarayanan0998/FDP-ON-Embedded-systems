//demo_program.c

#include <stdio.h>
#include <stdlib.h>

int global_var = 10;  // Data Section
int uninitialized_global_var;  // BSS Section

void demo_function() {
    static int static_var = 5;  // Data Section
    int local_var = 20;  // Stack Section

    printf("Inside demo_function:\n");
    printf("Local variable (stack): %d\n", local_var);
    printf("Static variable (data): %d\n", static_var);
    printf("Global variable (data): %d\n", global_var);
    printf("Uninitialized global variable (bss): %d\n", uninitialized_global_var);
}

int main() {
    int *heap_var = malloc(sizeof(int));  // Heap Section
    *heap_var = 30;

    printf("Inside main:\n");
    printf("Heap variable: %d\n", *heap_var);
    printf("Global variable (data): %d\n", global_var);
    printf("Uninitialized global variable (bss): %d\n", uninitialized_global_var);

    demo_function();

    free(heap_var);  // Freeing the dynamically allocated memory

    return 0;
}
