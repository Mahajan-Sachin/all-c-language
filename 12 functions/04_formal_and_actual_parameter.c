#include <stdio.h>
#include <stdlib.h>
float min(float x,float y){// here intx ,int y are formal  parameter
    if(x>y){
        return y;
    }
    else{
        return x;
    }
}

int main(void) {
	float a;
    printf("enter the number a: ");
    scanf("%f",&a);	
    
    float b;
    printf("enter the number b: ");
    scanf("%f",&b);	
    float m=min(a,b);//here a,b are formal  parameter
    printf("Minimum of %f and %f is %f",a,b,m);
	return 0;
}