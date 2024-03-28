#include <stdio.h>
int main() {
	int n;
    printf("enter the number:");
    scanf("%d",&n);
    int check=1;//assuming prime by default
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
        check=0;
        break;
        }
    }
    if(n==1){
        printf("%d is neither prime nor composite",n);
    }
    else if(check==1){
        printf("%d is prime",n);
    }		
    else{
        printf("%d is composite",n);
    }
	return 0;
}