/*
1  2   3  4
5  6   7  8
9  10 11 12
13 14 15 16 */
//just made a ultime variable a=1
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int m;
	printf("enter no of rows:");
	scanf("%d",&m);
    int a=1;//notice this a is not inside any loop
	for(int i=1;i<=m;i++){
		for(int j=1;j<=m;j++){
			printf("%d   ",a);
			a=a+1;
		}
		printf("\n");
	}
	return 0;
}