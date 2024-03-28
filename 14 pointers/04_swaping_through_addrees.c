#include <stdio.h>
#include <stdlib.h>
void swap(int*x,int*y){
    int temp=*x;
    *x=*y;
    *y=temp;

}

int main(void) {
	printf("\n");
    int x;
    printf("enter 1st no: ");
    scanf("%d",&x);
    int y;
     printf("enter 2nd no: ");
    scanf("%d",&y);		

    printf("%d,%d\n",x,y)	;
    swap(&x,&y);
    printf("%d,%d\n",x,y)	;
	return 0;
}