#include <stdio.h>
#include <stdlib.h>

int a=3;
void change(){
    a=9;
    printf("%d\n",a);
}	
int main(void) {
	//int a=70;	
    printf("%d\n",a);
    change();
    printf("%d\n",a);
	return 0;
}