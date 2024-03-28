//max value in array
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//using this method we get even in negative
int main(void) {
	int arr[]={-1,-2,-3,-4,-8,-2,-9,-1,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("the greatest: %d",max);			
	return 0;
}