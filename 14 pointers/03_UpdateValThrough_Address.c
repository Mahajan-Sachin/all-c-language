#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int x=7;
    int*z=&x;
    printf("%d",x);
    *z=9;//we know *var stores val and now when *z =9 means now var(z) holds 9 as new value
    printf("%d",z);			
	return 0;
}