#include <stdio.h>
#include <stdlib.h>

// transpose is called column wise print:
int main(void) {
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}}		;
    for(int j=0;j<3;j++){
        for(int i=0;i<3;i++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }	
	return 0;
}