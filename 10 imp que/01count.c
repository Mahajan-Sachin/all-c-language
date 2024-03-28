//to count digits of a given no
#include <stdio.h>
int main(void) {
	int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int cont=0;
    while(n!=0){
        n=n/10;// the best approach to remove last element of a number is divide it by 10
        cont++;
        
    }	
    printf("count of digits is: %d",cont);	
	return 0;
}