#include <stdio.h>
#include <stdlib.h>
int factorial(int x){
    if(x==1){
        return 1;
    }
    else if (x==0)
    {
        return 1;
    }
    
    int y=x*factorial(x-1);
    return y;
}

int main(void) {
	int n;
    printf("enter N: ");
    scanf("%d",&n);
    printf("%d",factorial(n))		;	
	return 0;
}