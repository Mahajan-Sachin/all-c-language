//wap to store roll no and marks obt by 4 students side by side in matrix
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int arr[4][2]={{1,100},{2,99},{3,56},{4,71}}	;
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n")	;
    }	
	return 0;
}