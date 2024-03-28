//continue:skip a round in loop
#include <stdio.h>
int main(void) {
	int n;
    printf("enter the range:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2 ==0){// this will skip all even no 
            continue;
        }
        printf(" %d",i);
    }			
	return 0;
}