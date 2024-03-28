#include<stdio.h>
#include<stdlib.h>
int a;
extern void fun();
void main(){
    a=15;
    fun();
    getch();
}