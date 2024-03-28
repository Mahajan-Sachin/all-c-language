// a function calling itself
#include <stdio.h>
#include <stdlib.h>
void print_N(int n){
    if(n==0){
        return;
    }
    else{
        print_N(n-1);
        printf("%d\n",n);
    }
}

int main(void) {
    int n;
    printf("enter N: ");
    scanf("%d",&n);
	print_N(n);
	return 0;
}