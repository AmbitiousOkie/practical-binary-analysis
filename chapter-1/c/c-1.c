#include <stdio.h>

// int b = 0; // Global variable declaration
int added;
int a = 5;
char greeting[14] = "Hello, World!";

// Hello World Function
void hello_world() {
    printf("%s\n", greeting);
}

// Adds two integers and returns the result
int add(int a, int b) {
    return a + b;
}

// Sets the value of an integer to zero
void set_to_zero(int *a) {
    printf("The value of a before setting to zero:%d\n", *a);
    printf("Address of a: %p\n", &a);
    // if (a == NULL) {
    //     printf("Error: Null pointer passed to set_to_zero.\n");
    //     return;
    // }
    *a = 0;
    printf("Value of a is now set to:  %d\n", *a);
}

int main() {
    hello_world();
    added = add(1, 2);
    printf("The sum of 1 and 2 is: %d\n", added);
    set_to_zero(&a);
    return 0;
}