#include <stdio.h>
int main(void) {
	int x;
    printf("enter a no:");
    scanf("%d",&x);
    if(x>99 && x<1000){
        printf("given no is 3 digit no");
    }
    else
    printf("not a 3 digit no");
	return 0;
}