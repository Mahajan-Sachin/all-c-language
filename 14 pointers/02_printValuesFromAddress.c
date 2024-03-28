#include <stdio.h>
#include <stdlib.h>


int main(void) {
	 int x=90;
     int*z=&x;//this is a format to store address
     printf("%d\n",x);// this prints value of x
     printf("%p\n",z);// this prints addresss of x
     printf("%d\n",*z);//this will retrive value from address(*var stores value & var stores addres of that val)
     printf("%p",&z);//this prints address of z variable
	return 0;
}