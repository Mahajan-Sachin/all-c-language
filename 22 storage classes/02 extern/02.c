#include <stdio.h>

int globalVar = 100;  // Definition of globalVar

int main() {
    extern int globalVar;  // Declaration of globalVar using extern
    printf("Value of globalVar: %d\n", globalVar);  // Accessing globalVar
    return 0;
}
