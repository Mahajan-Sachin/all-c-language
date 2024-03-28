#include <stdio.h>
int main(void) {
	int i=1;
    while (i<100);//here ";" was not req it will finish the code of this line so nothing will print
    {
        printf("%d",i);
        printf(",");
        i++;
    }
    			
	return 0;
}