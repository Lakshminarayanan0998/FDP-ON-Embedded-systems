//static binding:

#include <stdio.h>

void printMessage() {
    printf("This is a statically bound function.\n");
}

int main() {
    printMessage();  // Function call resolved during compile time
    return 0;
}
