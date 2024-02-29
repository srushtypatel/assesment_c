// Write a program to make multiplication of 2-D Matrix 

//multiplication off metrix-1 and metrix-2
#include <stdio.h>

int main() {
    printf("\n ...............................Multiplication...............................\n\n\n");
    
    int i, j, k;
    int a1[2][2], a2[2][2], mul[2][2];
    
    printf("\n ...............................Matrix-1...............................");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("\n enter first matrix element : ", i, j);
            scanf("%d", &a1[i][j]);
        }
        printf("\n");
    }
    
    printf("\n ...............................Matrix-2...............................");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("\n enter second matrix element : ", i, j);
            scanf("%d", &a2[i][j]);
        }
        printf("\n");
    }
    
    printf("\n ...............................Multiplication-Matrix...............................");
    printf("\n\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            mul[i][j] = 0;
            for (k = 0; k < 2; k++) {
                mul[i][j] += a1[i][k] * a2[k][j];
            }
            printf(" %d ", mul[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
