#include<stdio.h>
int main(){
    int mat[3][3], i, j;

    printf("Enter elements:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    // Matrix printing
    printf("\nOriginal Matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%3d", mat[i][j]);
        }
        printf("\n");
    }

    // Transpose printing (correct way)
    printf("\nTranspose Matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%3d", mat[j][i]);  // <-- sirf yaha change
        }
        printf("\n");
    }

    return 0;
}
