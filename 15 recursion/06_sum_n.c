// a function calling itself
#include <stdio.h>
#include <stdlib.h>
void sum1toN(int n,int sum){
    if(n==0){
        printf("%d is your result",sum);
        return;
    }
    else{
        sum1toN(n-1,sum+n);
    }
}

int main(void) {
    int n;
    printf("enter N: ");
    scanf("%d",&n);
	sum1toN(n,0);
	return 0;
}