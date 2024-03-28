// The "extern storage class in C is used to declare variables or functions that are defined elsewhere in the program. It is particularly useful when you want to access a global variable or function that is defined in another file or in a different part of the same file. Here's an explanation with examples:
// File: file1.c
#include<stdio.h>
#include<stdlib.h>
int a;
extern void fun();
void main(){
    a=15;
    fun();
    getch();
}