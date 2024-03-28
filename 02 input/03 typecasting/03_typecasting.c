//Type casting in C is the process of converting a variable from one data type to another. There are two types of type casting: implicit and explicit.



//Implicit Type Casting (Automatic Type Conversion):
//This occurs when the compiler automatically converts one data type to another without any programmer intervention.
//It generally happens when a value of a smaller data type is assigned to a variable of a larger data type.
#include<stdio.h>
int main(){
    int x = 10;
    printf("%d\n",x);
    float num_float = x;  // Implicit type casting from int to float
    printf("%f\n",x);// it returns 0 bcoz x is int but i am trying toprint it in form of float
    printf("%f\n",num_float);
    return 0;
}


/*n the C programming language, the double data type is used to represent double-precision floating-point numbers. It provides higher precision compared to the float data type. The keyword double is used to declare variables of this type.*/