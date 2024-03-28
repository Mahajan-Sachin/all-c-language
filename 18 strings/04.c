// in 01 we get to know string is defined as arr[]={'k','a','r','a','n','\0'};but it is very hectic so c gives a shortcut

// when \0 is in end of char array is called string
#include <stdio.h>
#include <stdlib.h>

//'0' is called null char
int main(void) {
	char arr[]="karan is  \0 a man"; 
    printf("%s",arr);// now this will print karan is bcoz in 01 we learn a string is array which has char and \0 in end
    printf("\n");
	return 0;
}
 