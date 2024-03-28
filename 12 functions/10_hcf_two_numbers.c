#include <stdio.h>
#include <stdlib.h>
int find_hcf(int x,int y){
    int hcf=1;
    for(int i=1;i<=x && i<=y;i++){
        if((x%i==0)&&(y%i==0)){
            hcf=i;
        }
    }
    printf("HCf of %d and %d is:%d",x,y,hcf);
}

int main(void) {
	int n;
    printf("enter first number: ");
    scanf("%d",&n);

    int n2;
    printf("enter second number: ");
    scanf("%d",&n2);	

    find_hcf(n,n2);	
	return 0;
}