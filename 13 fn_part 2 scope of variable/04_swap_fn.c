#include <stdio.h>
#include <stdlib.h>
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    printf("after swapping:\nist val=%d 2nd val=%d",a,b);
    return;
}
int main(void) {
	int x;
    printf("enter first no:");
    scanf("%d",&x);//let x=4

    int y;
    printf("enter second no:");
    scanf("%d",&y);	//y=9
    printf("Before:\nist val=%d 2nd val=%d\n",x,y);
    swap(x,y);
    					
	return 0;
}