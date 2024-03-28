// // This is the default storage class for all the variables declared inside a
// // function or a block.
// // • Auto variables can be only accessed within the block/function they have
// // been declared and not outside them (which defines their scope).
// // • These can be accessed within nested blocks within the parent block/function
// // in which the auto variable was declared.
// // • However, they can be accessed outside their scope as well using the concept
// // of pointers given here by pointing to the very exact memory location where
// // the variables reside.
// // • They are assigned garbage value by default whenever they are declared.
#include <stdio.h>
int main() {
    auto int x = 10;  // Declaration of x with auto storage class
    printf("Value of x: %d\n", x);
    return 0;
}
// In this example, the variable x is declared with the auto storage class. It is automatically initialized to 10 because auto variables are not explicitly initialized by default. When the program runs, it prints the value of x as 10.


