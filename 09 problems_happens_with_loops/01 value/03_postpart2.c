#include<stdio.h>
int main(){
    int x=5,y=3,z;
    printf("%d",x--);
    printf("\n%d",x); 
    return 0;
}
/*printf("%d", x--);: The first printf statement prints the current value of x (which is 5) and then decrements x by 1 due to the post-decrement operator (x--). The post-decrement operator means that the current value of x is used in the expression, and then x is decremented.

So, the output of this printf is 5, and after this statement, the value of x becomes 4.*/