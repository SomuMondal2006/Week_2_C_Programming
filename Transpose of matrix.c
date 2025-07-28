//Transpose of matrix
//https://www.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1


#include <stdio.h>
#define MAX 1000  

void transpose(int mat[MAX][MAX], int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
}

void printMatrix(int mat[MAX][MAX], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int mat[MAX][MAX];
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }


    transpose(mat, n);

    printMatrix(mat, n);

    return 0;
}

