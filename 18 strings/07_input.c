#include <stdio.h>
#include <stdlib.h>


int main(void) {
	char str[50];
    printf("enter string: ");
    scanf("%s",str);//karan is a good boy(enter this string to see probm)
    printf("%s",str);//if you mention any string having space bw them it will break it:to solve it we see this in next slide
	return 0;
}