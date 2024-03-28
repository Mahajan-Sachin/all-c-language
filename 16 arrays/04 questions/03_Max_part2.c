 #include <stdio.h>
#include <stdlib.h>


int main(void) {
	int arr[]={-1,-2,-3,-4,-8,-2,-9,-1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        else{
             max;
        }
    }
    printf("the greatest: %d",max);			
	return 0;
}