#include <stdio.h>
#include <stdlib.h>
int power1(int x,int y){
    if(x<0 || y<0){
        printf("invalid");
    }
    else if (y==0)
    {
        return 1;
    }
    else{
    int z=x*power1(x,y-1);
    return z;
    }
}

int main(void) {
	int a;
    printf("enter base: ");
    scanf("%d",&a);
    int b;
    printf("enter power: ");
    scanf("%d",&b);
    printf("%d raised to power %d is %d",a,b,power1(a,b))		;	
	return 0;
}