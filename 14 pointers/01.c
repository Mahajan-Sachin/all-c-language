// int x=4bytes;
// float=4bytes
// char=2bytes
// bool=1bytes
//we can also see the address of the storage
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int x=8;
    printf("\n");
    printf("%p",&x);//here & rep address	and you can get diff adress evertime bcoz you have already give a space		
     printf("\n");// bcoz of pointers you can even store the addrress of a variable in a diff variable;

     int z=5;
     int*y=&z;//this is a format to store address    //if you think carefully you store address of z in var y means even y can have some address
     printf("%p",y);
	return 0;
}