// a function calling itself
//print of n to 1 numbers
#include <stdio.h>
#include <stdlib.h>
void print_N(int n){
    if(n==0){
        return;
    }
    else{
        printf("%d\n",n);
        print_N(n-1);
    }
}

int main(void) {
    int n;
    printf("enter N: ");
    scanf("%d",&n);
	print_N(n);
	return 0;
}