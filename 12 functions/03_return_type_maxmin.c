#include <stdio.h>
#include <stdlib.h>
int min(int x,int y){// here intx is a parameter
    if(x>y){//here as you can see "int min" is used as this fn returns y and x in form of integer lly let say if x and y are float then we have to say float min()
        return y;
    }
    else{
        return x;
    }
}

int main(void) {
	int a;
    printf("enter the number a: ");
    scanf("%d",&a);	
    
    int b;
    printf("enter the number b: ");
    scanf("%d",&b);	
    int m=min(a,b);
    printf("Minimum of %d and %d is %d",a,b,m);
	return 0;
}