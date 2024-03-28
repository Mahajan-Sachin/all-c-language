#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int m;
	printf("enter no of rows:");
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		int a=1;
		for(int j=1;j<=m+1-i;j++){
			printf("%d ",a);
			a=a+2;
		}
		printf("\n");
	}
	return 0;
}