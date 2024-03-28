#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int x[5]={11,2,3,4,5}; //x[] declared array   //where 5 is the length or size of array 	
    printf("0th: %d\n",x[0])		;//rember for interview first index is called lower bond and last is called upper bond
	printf("2nd: %d\n",x[2])		;
	printf("1st: %d\n",x[1])		;
	printf("4th: %d\n",x[4])		;
	printf("3rd: %d\n",x[3])		;
	//updatation
	x[4]=100;
	printf("4th: %d\n",x[4]);
	// to print whole array:
	for(int i=0;i<5;i++){
		printf("%d\n",x[i]);
	}
	// you can aslo make array in this form
	int numbers[] = {10, 20, 30, 40, 50};// without any length
	//important concept
	int a[3]={5};//it means length of array is 3 means 3 elements but 1st element value is 5
	for(int i=0;i<3;i++){
		printf("%d",a[i]);
	}
	return 0;
}