// when \0 is in end of char array is called string
#include <stdio.h>
#include <stdlib.h>

//'0' is called null char
int main(void) {
	char arr[]={'k','a','r','a','n','\0'};
    int size=sizeof(arr)/sizeof(arr[0]);		
    for(int n=0;n<size;n++){
        printf("%c",arr[n]);
    }	
    printf("\n");
	return 0;
}
