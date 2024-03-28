#include <stdio.h>
#include <stdlib.h>
void odd_even(int x){// here intx is a parameter
    if(x%2==0){
        printf("%d is even",x);
    }
    else{
        printf("%d no is odd",x);
    }
}

int main(void) {
	int a;
    printf("enter the number: ");
    scanf("%d",&a);	
    odd_even(a);//this is argument
	return 0;
}