#include<stdio.h>
#include<stdlib.h>
#include<math.h>//never ever use conio.h
int main(){
    int n,r,b=0,base=1;//b=binary

    printf("enter decimal number: ");
    scanf("%d",&n);
    while(n>0){
        r=n%2;
        b=b+(r*base);
        n=n/2;
        base=base*10;
    }
    printf("binary no: %d",b);
    return 0;
}