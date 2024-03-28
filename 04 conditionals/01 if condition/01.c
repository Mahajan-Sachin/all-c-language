#include <stdio.h>
int main(void) {
    int x;
    printf("enter a no:");
    scanf("%d",&x);
    if(x>0)printf("given no is a positive number");
    if(x<0)printf("no is negative");
	return 0;
}