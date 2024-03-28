#include <stdio.h>
#include <stdlib.h>
int sum1toN(int x){
    if(x==1){
        return 1;
    }
    int y=x+sum1toN(x-1);
    return y;
}

int main(void) {
	int n;
    printf("enter N: ");
    scanf("%d",&n);
    printf("%d",sum1toN(n))		;	
	return 0;
}