#include <stdio.h>

int main() {
    auto int z = 30;  // Declaration of z with auto storage class
    {
        auto int z = 40;  // Redeclaration of z with auto storage class
        printf("Inner z: %d\n", z);  // Inner z is 40
    }
    printf("Outer z: %d\n", z);  // Outer z is still 30
    return 0;
}
