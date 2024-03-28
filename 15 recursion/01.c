// a function calling itself
#include <stdio.h>
#include <stdlib.h>
void greet(int n){
    if(n==0){
        return;
    }
    else{
        printf("good morning\n");
        greet(n-1);
    }
}

int main(void) {
    int n;
    printf("enter no of times you want to greet me: ");
    scanf("%d",&n);
	greet(n);
	return 0;
}