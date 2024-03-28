#include <stdio.h>
#include <stdlib.h>
void japan(){ 
    printf("you are in japan\n");
    return;
}

void england(){ 
    printf("you are in england\n");
    japan();
    return;
}

void india(){ 
    printf("you are in india\n");
    england();
    return;
}

int main(void) {
	printf("you are in main\n");
    india();	// so yes we can call fn many times	
	return 0;
}