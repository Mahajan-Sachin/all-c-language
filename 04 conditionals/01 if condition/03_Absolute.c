#include <stdio.h>
int main(void) {
    int x;
    printf("enter a no:");
    scanf("%d",&x);
    if(x>0){
        printf("given no is a positive number no so abs value is same %d",x);}
    if(x<0)
        {printf("no is negative\n");
        x=x*(-1);
        printf("after abs: %d",x);}
	return 0;
}