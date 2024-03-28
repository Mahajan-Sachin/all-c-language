#include<stdio.h>
#include<stdlib.h>
#include<math.h>//never ever use conio.h
int main(){
    int n,r,d=0,base=1;//n=integer(input),d=decimal(req output) ,r=remainder

    printf("enter number: ");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        d=d+(r*base);
        n=n/10;
        base=base*2;
    }
    printf("Decimal no: %d",d);
    return 0;
}