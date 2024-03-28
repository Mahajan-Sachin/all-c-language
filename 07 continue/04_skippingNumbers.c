//skip first 10 numbers
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	for(int i=1;i<=20;i++){
        if(i<=10){
            continue;
        }
        printf("%d ",i);
    }			
	return 0;
}