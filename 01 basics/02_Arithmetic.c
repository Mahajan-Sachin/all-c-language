//%d is for integer in float we use %f
#include<stdio.h>
int main(){
    float x=3;
    float y=2;
    float z=x/y;
    printf("%f",z);
    //but
    float m=5/2;//here 5 is int 2 is int so m=int which means m=2 then its get converted into float
    printf("\n%f",m);
    printf("\nnew answer will be: %d",m);
    printf("\nkaran");
    int a=23;
    int b=60;
    printf("\na modulus b is :%d",a%b);//when a<b then modulus of a and b is is a
    int c=120;
    int d=-61;
    printf("\nc modulus d is :%d",c%d);//when a is + and b is -ve then modulus of a and -b is +ve value
    int e=-7;
    int f=4;
    printf("\ne modulus f is :%d",e%f);//when a is - and b is +ve then modulus of -a and +b is -(a%b)
    int g=5/2;
    printf("\nyour value of g is: %d",g);
    return 0;

}