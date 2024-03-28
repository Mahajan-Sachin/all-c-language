// in 01 we get to know string is defined as arr[]={'k','a','r','a','n','\0'};but it is very hectic so c gives a shortcut

// when \0 is in end of char array is called string
#include <stdio.h>
#include <stdlib.h>

//'0' is called null char
int main(void) {
	char arr[]="karan is a man";//here actual size is 14 but when you hover you will see 15 bcoz "\0" is aslo considered automatically 
    int size=sizeof(arr)/sizeof(arr[0]);		
    for(int n=0;n<size;n++){
        printf("%c",arr[n]);// actually it also tries to print \0 but bcoz its a null char it does not show or print 
    }	
    printf("\n");
    printf("%d ",size);
	return 0;
}
// now we still have a prob in printing of string as we are using a loop so see in next slide: