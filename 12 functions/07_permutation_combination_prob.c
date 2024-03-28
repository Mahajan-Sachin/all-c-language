#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int factorial(int x){
    int product=1;
    for(int i=1;i<=x;i++){
        product=product*i;
    }
    return product;
}
int ncr(int y,int z){
    return factorial(y)/(factorial(z)*factorial(y-z));
}
int main(void) {
    int n;
    printf("enter n:");
    scanf("%d", &n);

    int r;
    printf("enter r:");
    scanf("%d", &r);


    int ans = ncr(n, r);
    printf("%d",ans);			
	return 0;
}