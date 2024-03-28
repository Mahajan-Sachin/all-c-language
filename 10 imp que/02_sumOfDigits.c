// sum of digits of a given no
#include <stdio.h>
int main(void) {
	int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        int last_digit=n%10;//to store last digit we use modulus
        n=n/10;
        sum=sum+last_digit;
        
    }	
    printf("sum of digits is: %d",sum);	
	return 0;
}