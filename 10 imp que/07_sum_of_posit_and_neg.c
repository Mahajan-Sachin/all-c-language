#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int num;
    printf("Enter a num: ");
    scanf("%d",&num);
    int sum=0;
    if(num>=0){
    for(int i=1;i<=num;i++){
        sum=sum+i;
    }		
    printf("your sum is: %d",sum);	
    }
    else{
        for(int j=1;j<=num*(-1);j++){
        sum=sum+j;
    }		
    printf("your sum is: %d",sum*(-1));	
    }
     
	return 0;
}