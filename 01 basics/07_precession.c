//In C, you can use the printf function with a precision specifier to control the number of digits displayed after the decimal point. Here's an example:
#include <stdio.h>

int main(void) {
    int a = 11;
    printf("%.8f\n", (double)a);
    return 0;
}
//In this example, %.8f specifies that you want to print a floating-point number with 8 digits after the decimal point. The cast to (double) is used to ensure that the integer a is treated as a floating-point number.
// Note that in C, you typically use %f to print floating-point numbers, and the .8 in %f specifies the precision.