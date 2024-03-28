/*
1
0 1//herewe can see the position where i+j=even that place has 1
1 0 1
0 1 0 1
1 0 1 0 1*/


#include <stdio.h>
int main(void) {
	int m;
    printf("enter number of rows: ");
    scanf("%d",&m);	
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                printf("%d  ",1);
            }
            else{
                 printf("%d  ",0);
            }
           
        }
        printf("\n");
    }		
	return 0;
}