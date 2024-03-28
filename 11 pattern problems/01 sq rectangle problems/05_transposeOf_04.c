#include<stdio.h>
int main(){
    int m;
    printf("enter the sides: ");
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        for (int j = 1; j <= m; j++)
        {
            printf("%d ",i);
        }
     printf("\n");
    }
    return 0;
}