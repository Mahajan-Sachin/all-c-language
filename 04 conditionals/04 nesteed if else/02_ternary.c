//wap to check is no is even or odd
//condition?exp1:exp2
#include <stdio.h>
int main(void) {
	int x;
    printf("enter x:");
    scanf("%d",&x);
    (x%2==0)?printf("even no"):printf("odd");			
	return 0;
}