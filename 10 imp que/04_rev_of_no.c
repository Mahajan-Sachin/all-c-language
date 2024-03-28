//reverse order horizontally
#include <stdio.h>
int main(void) {
	int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int r=0;
    while(n>0){
        int last_digit=n%10;
        n=n/10;
        r=r*10;
        r=r+last_digit;
        
    }	
    printf("reverse of digits is: %d",r);	
	return 0;
}