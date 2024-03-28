#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    typedef struct car {
        int price;
        float topspeed;
        char brand[20];  
    }car;

    car cl;// now you dont have to write struct again
    cl.topspeed = 200;
    cl.price = 1000000;
    strcpy(cl.brand, "sedan");  

    printf("%s\n", cl.brand);
    printf("%d\n", cl.price);
    printf("%f\n", cl.topspeed);

    return 0;
}
