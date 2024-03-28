 #include <stdio.h>
#include <stdlib.h>

int main(void) {
    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    // 2nd matrix
    int arr2[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    // 3rd matrix
    int arr3[3][3];
    for(int k=0; k<3; k++){
        for(int n=0; n<3; n++){
            arr3[k][n] = arr1[k][n] + arr2[k][n];
        }
    }

    for(int l=0; l<3; l++){
        for(int m=0; m<3; m++){
            printf("%d ", arr3[l][m]);
        }
        printf("\n");
    }

    return 0;
}
