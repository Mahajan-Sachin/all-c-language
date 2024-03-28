#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
    int value[]={0,1,4,7,33,76};
    int numValues=sizeof(value)/sizeof(value[0]);
    int randomIndex=rand() % numValues;
    int randomValue=value[randomIndex];
    printf("random num: %d",randomValue);			
	return 0;
}