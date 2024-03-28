#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int brr[n];
    for(int j=0;j<n;j++){
        brr[j]=arr[n-1-j];
    }
    for(int k=0;k<n;k++){
        printf("%d ",brr[k]);
    }
	return 0;
}