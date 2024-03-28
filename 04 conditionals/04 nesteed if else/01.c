// divisibility by 3 and 5
#include <stdio.h>
int main(void) {
	int x;
    printf("enter a no: ");
    scanf("%d",&x);
    if(x%5==0){
        printf("number is divisible by 5");
        if(x%3==0){
            printf("\nnumber is divisible by 3 also, condition fully satisfied");
        }
        else{
           printf("\nbut number is not divisible by 3 ");
        }
    }
    else if (x%3==0)
    {
        printf("condition doesnot match with 5 but matches with 3");
    }
    else{
        printf("both conditions failed");
    }
	return 0;
}