#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int arr[]={1,2,3,4,8,2,9,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    printf("the total sum of array is: %d",sum);			
	return 0;
}