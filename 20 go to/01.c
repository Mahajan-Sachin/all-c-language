//to create a loop and to break a loop
//create a loop
#include <stdio.h>
int main(){
    int num;
    printf("enter num:");
    scanf("%d",&num);
    int i=1;
    table:
    printf("%d x %d=%d\n",num,i,num*i);
    i++;
    if(i<=10)
    goto table;
    return 0;
}