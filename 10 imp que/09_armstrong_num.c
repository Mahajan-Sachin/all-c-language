#include <stdio.h>
#include <math.h>
int main(){
    int N,sum=0,last_digit;
    printf("enter N:");
    scanf("%d",&N);
    int original_Num=N;
    while(N>0){
        last_digit=N%10;
        int cubic=last_digit*last_digit*last_digit;
        N=N/10;
        sum=sum+cubic;
    }
    if(sum==original_Num){
        printf("given no is armstrong");
    }else{
        printf("not a armstrong number");
    }
}