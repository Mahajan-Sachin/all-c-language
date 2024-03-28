#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int arr[]={1,2,3,4,5,7,6,9,0};
    int size=sizeof(arr)/4;
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int brr[size];
     for(int j=0;j<size;j++){
        brr[j]=arr[size-1-j];
    }
    for(int k=0;k<size;k++){
        printf("%d ",brr[k]);
    }
    printf("\n");
	return 0;
}