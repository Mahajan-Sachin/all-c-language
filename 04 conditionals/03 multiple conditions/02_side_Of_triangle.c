//take 3 sides as input and tell if they can be sides of a triangle
/*The triangle inequality theorem states that the sum of the lengths of any two sides of a triangle must be greater than or equal to the length of the third side. This criterion ensures that you can form a closed figure when connecting three line segments to create a triangle.
Mathematically, for a triangle with sides of lengths 
a, b, and c, the triangle inequality is expressed as:
a+b>c
b+c>a
c+a>b
If any of these inequalities is not satisfied, then the given three side lengths cannot form a triangle. Additionally, if any of the inequalities are satisfied with equality (
a+b=c,
b+c=a, 
c+a=b), it represents a degenerate triangle, which is essentially a straight line.
*/
#include <stdio.h>
int main(void) {
	int a;
    printf("enter a:");
    scanf("%d",&a);
    int b;
    printf("enter b:");
    scanf("%d",&b);
    int c;	
    printf("enter c:");
    scanf("%d",&c);
    if(a<b+c && b<a+c && c<a+b){
        printf("yes possible");
    }
    else{
        printf("not possible");
    }
	return 0;
}