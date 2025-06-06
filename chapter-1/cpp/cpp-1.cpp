#include <iostream>
using namespace std;

int added;
int a = 5;
string greeting = "Hello, World!\n";

void hello_world() {
  cout << greeting;
}

int add(int a, int b) {
    return a + b;
}

// Sets the value of an integer to zero
void set_to_zero(int *a) {
    printf("The value of a before setting to zero: %d\n", *a);
    printf("Address of a: %p\n", &a);
    if (a == NULL) {
        printf("Error: Null pointer passed to set_to_zero.\n");
        return;
    }
    *a = 0;
    printf("Value of a is now set to: %d\n", *a);
}

int main() {
  hello_world();
  added = add(1,2);
  printf("The sum of 1 and 2 is: %d\n", added);
  set_to_zero(&a);
  return 0;
}
