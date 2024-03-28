#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int x[]={11,2,3,4,5,2,3,4,5};  
    int size=sizeof(x)/sizeof(x[0]);// this is syntax so compromise it
	for(int i=0;i<size;i++){
		printf("%d\n",x[i]);
	}

	return 0;
}