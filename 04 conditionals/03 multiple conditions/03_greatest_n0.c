/*In Python, you can use both "and" and "&&" as logical AND operators interchangeably, but in C, you must use && for logical AND in conditions. Using "and" instead of && will result in a compilation error.*/
#include <stdio.h>
int main(void) {
	int a;
    printf("enter a:");
    scanf("%d",&a);

    int b;
    printf("enter b:");
    scanf("%d",&b);	

    int c;
    printf("enter c:");
    scanf("%d",&c);	

    if(a>b && a>c){
        printf("a is greatest");
    }	
    else if (b>a && b>c){
        printf("b is greatest");
    }
    else{
        printf("c is greatest");
    }    	
	return 0;
}