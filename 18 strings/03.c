// in 01 we get to know string is defined as arr[]={'k','a','r','a','n','\0'};but it is very hectic so c gives a shortcut

// when \0 is in end of char array is called string
#include <stdio.h>
#include <stdlib.h>

//'0' is called null char
int main(void) {
	char arr[]="karan is a man"; 
    printf("%s",arr);//instead of using loop and %c we can directly do in this way
	return 0;
}
// now we still have a prob in printing of string as we are using a loop so see in next slide: