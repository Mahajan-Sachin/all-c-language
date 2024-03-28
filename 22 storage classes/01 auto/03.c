#include <stdio.h>

void func() {
    auto int y = 20;  // Declaration of y with auto storage class
    printf("Value of y inside func: %d\n", y);
}

int main() {
    func();  // Call the function
    //printf("Value of y outside func: %d\n", y); // Error: y is not accessible here
    return 0;
}
