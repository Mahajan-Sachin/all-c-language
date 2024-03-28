#include <stdio.h>
int main(void) {
	int x;
    printf("Enter a no:");
    scanf("%d",&x);
    if(x%2==0){
        printf("even number");
    }
    else{
        printf("odd number");
    }		
	return 0;
}