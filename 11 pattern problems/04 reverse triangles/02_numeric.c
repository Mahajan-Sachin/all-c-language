#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int m;
    printf("enter number of rows: ");
    scanf("%d",&m);	
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m+1-i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }			
	return 0;
}