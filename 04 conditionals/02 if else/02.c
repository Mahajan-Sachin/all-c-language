 #include <stdio.h>
int main(void) {
    int x;
    printf("enter a no:");
    scanf("%d",&x);
    if(x>0){
        printf("given no is a positive number");}
    else
        printf("no is negative or zero");
	return 0;
}