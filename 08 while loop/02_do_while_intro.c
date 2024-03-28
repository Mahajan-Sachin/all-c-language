 #include <stdio.h>
int main(void) {
	int i=11;
    while (i<10)// as we can see the condions is already failed so it will not work but to make it work for atleast one time we use do do while loop
    {
        printf("%d",i);
        printf(",");
        i++;
    }
    			
	return 0;
}