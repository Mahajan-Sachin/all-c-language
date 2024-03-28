#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char arr[]="Sohan is a man"; 
    printf("%c",arr[4]); 
    printf("\n");
    arr[0]='M';
    arr[3]=65;// it will change acc to ascii
    printf("%s",arr);
    printf("\n");
	return 0;
}
