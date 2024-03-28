/*
*/
#include <stdio.h>
#include <stdlib.h>
int fibo(int x){
    if(x==1){
        return 1;
    }
    else if (x==2)
    {
        return 1;
    }
    
    else{
        return fibo(x-1)+fibo(x-2) ;
    }

}
int main(void) {
	int n;
    printf("enter N: ");
    scanf("%d",&n);
    printf("%d",fibo(n))		;	
	return 0;
}