// if sum of the factorials of a input==original input
#include <stdio.h>
#include <stdlib.h>
int factorial(int x){
    if(x==0 || x==1){
        return 1;
    }else{
        return x*factorial(x-1);
    }
}
int isStrongNum(int num){
    int original=num;
    int sum=0;
    while(num>0){
        int last_digit=num%10;
        sum=sum+factorial(last_digit);
        num=num/10;
    }
    return(sum==original);
}
int main(){
    long long int n;
    scanf("%lld",&n);
    if(isStrongNum(n)){
        printf("Strong number");
    }
    else{
        printf("Not a strong number");
    }
    return 0;
}