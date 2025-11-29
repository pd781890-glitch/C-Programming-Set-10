#include <stdio.h>

int main() {
    int my_variable = 42;
    
    // &my_variable fetches the memory location of my_variable.
    printf("Value of my_variable: %d\n", my_variable);
    printf("Memory address of my_variable: %p\n", &my_variable);
    
    return 0;
}