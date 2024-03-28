#include <stdio.h>
int main(void) {
	int n;
    printf("enter whose factorial you want:");
    scanf("%d",&n);
    int product=1;
    if(n!=0){
        for(int i=1;i<=n;i++){
            product=product*i;
        }
        printf("factorial of the no is: %d",product);
    }	
    else{
        printf("you enter 0 0r invalid number so factorial is :1");
    }	
	return 0;
}