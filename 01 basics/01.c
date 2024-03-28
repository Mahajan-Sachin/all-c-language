#include<stdio.h>

int main()// int means to return value which is in integer which actually is zero(thats why we write return 0 at last)
{
    printf("   Hello World \n karan");
    int x=5;
    printf("\n%d",x);/*to print variables %d is used*/
    x=x+5;
    printf("\n%d",x);/*\n for new line*/
    int b=3;
    printf("%d",b);/*it shows why it is necessary*/
    x=b+5;
    printf("\n%d",x/b); // it shows 2 as answer which is wrong bcoz it gives int data type

    return 0;
}

