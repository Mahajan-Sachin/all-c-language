#include <stdio.h>
int main(void) {
    int n;
    printf("enter th no:");
    scanf("%d",&n);
    int hf=1;
    for(int i=n-1;i>=1;i--){
        if(n%i==0){
            hf=i;
            printf(" %d",hf);//in mathematics hf of any value is always less than or equal to its half value we will se in next slide
            break;
        } 
         
    }			
	return 0;
}