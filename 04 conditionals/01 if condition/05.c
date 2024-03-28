//profit and loss
#include <stdio.h>

int main(void) {
	float x;
	printf("Enter cost price of item:" );
	scanf("%f",&x);
	float y;
	printf("Enter the selling price:");
	scanf("%f",&y);
	float z=y-x;
	if(z>0){
		printf("you get a profit of rupess:%f",z);
	}
	if(z<0){
		printf("you get a loss of rupess:%f",z*(-1));
	}
	if(z==0){
		printf("you neither get a loss or profit" );
	}
	return 0;
}