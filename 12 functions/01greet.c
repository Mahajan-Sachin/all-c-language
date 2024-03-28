#include <stdio.h>
#include <stdlib.h>
void greet(){//void means return type null means just do printing
    printf("good morning\n");
    printf("how are you\n");
    return;
}

int main(void) {
	printf("i am sachin mahajan\n")	;
    greet();	
    printf("i am at work\n");
    greet();	
    greet();	// so yes we can call fn many times	
	return 0;
}