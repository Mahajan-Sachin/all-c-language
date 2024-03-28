 #include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int x;
    printf("enter an integer x: ");
    scanf("%d", &x);
    if (x > 0) {
        printf("given integer is positive so abs is same: %d\n", x);
    } else {
        int absValue = abs(x);
        printf("Absolute value of x: %d\n", absValue);
    }

    float y;
    printf("enter a floating point number y: ");
    scanf("%f", &y);  // Use %f for reading a float
    if (y > 0) {
        printf("given float is positive so abs is same: %f\n", y);
    } else {
        float absValue2 = fabs(y);  // Use fabs() for floating-point numbers
        printf("Absolute value of y: %f\n", absValue2);
    }

    return 0;
}
