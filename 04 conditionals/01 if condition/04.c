//take float as an input and check if it is an integer or not
#include <stdio.h>
int main(void) {
	float x;
    printf("enter input:");
    scanf("%f",&x);
    int y=(int)x;
    float z=(float)y;
    if((x-z)>0){
        printf("given number is float");
    }
    if((x-z)==0){
        printf("given number is integer");
    }	
	return 0;
}