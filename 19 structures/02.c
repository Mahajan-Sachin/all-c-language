#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    struct car {
        int price;
        float topspeed;
        char brand[20]; // Make it an array of characters to store a string
    };

    struct car cl;
    cl.topspeed = 200;
    cl.price = 1000000;
    strcpy(cl.brand, "sedan"); // Now you can use strcpy to copy the string

    printf("%s\n", cl.brand);
    printf("%d\n", cl.price);
    printf("%f\n", cl.topspeed);

    return 0;
}
