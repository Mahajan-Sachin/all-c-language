#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter num:..");
    scanf("%d",&n);
    if(n%2==0)
    goto even;
    else
    goto odd;
    even:
        printf("even");
        exit(0);//use this otherwise it will print odd too
    odd:
        printf("odd");
    return 0;
}