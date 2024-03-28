#include <stdio.h>
int main(void) {
    int i;
    printf("enter whoase table you want to print:");
    scanf("%d",&i);
    int j;
    for(j=0;j<=10;j++){
        printf("%dx%d=%d\n", i, j, i * j); 
    }			
	return 0;
}