#include <stdio.h>
#include <stdlib.h>
void print_N(int x,int y){
     if(x>y){
        return;
     }
     else{
        printf("%d\n",x);
        print_N(x+1,y);
        
     }
}

int main(void) {
	int n;
    printf("Enter N: ");
    scanf("%d",&n);	
    print_N(1,n);	
	return 0;
}