#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int x;
    printf("enter first no:");
    scanf("%d",&x);//let x=4

    int y;
    printf("enter second no:");
    scanf("%d",&y);	//y=9
    printf("Before:\nist val=%d 2nd val=%d\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swapping:\nist val=%d 2nd val=%d",x,y);					
	return 0;
}