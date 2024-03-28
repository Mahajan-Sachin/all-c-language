#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int arr[5][5]		;
    int n;
    printf("enter the val you want to store: ");
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=n;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }	
	return 0;
}
