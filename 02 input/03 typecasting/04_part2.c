#include <stdio.h>
int main(void) {
    float num_float = 10.5;
int num_int = (int)num_float;  // Explicit type casting from float to int
    printf("num_float:%f\n",num_float);
    printf("num_int:%d\n",num_int);
    /*Here's a simple example of declaring and using a double variable in C:*/
    double myDouble = 3.14159;  // Declaration and initialization of a double variable

    printf("Value of myDouble: %f\n", myDouble);
	return 0;
}

/*In C, you don't have a built-in function like type() in Python to check the data type of a variable directly. C is a statically typed language, which means that the data type of a variable must be declared at compile time and cannot change during runtime.*/