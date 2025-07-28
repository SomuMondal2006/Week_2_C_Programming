//Rotate matrix by 90 degree
//https://www.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1


#include <stdio.h>
#define MAX 102

void rotate90Anticlockwise(int mat[MAX][MAX], int n) {
    int i, j, temp;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    for (j = 0; j < n; j++) {
        for (i = 0; i < n / 2; i++) {
            temp = mat[i][j];
            mat[i][j] = mat[n - 1 - i][j];
            mat[n - 1 - i][j] = temp;
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
    int mat1[MAX][MAX] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };

    int mat2[MAX][MAX] = {
        {1, 2},
        {3, 4}
    };

    printf("Original mat1:\n");
    printMatrix(mat1, 3);
    rotate90Anticlockwise(mat1, 3);
    printf("Rotated mat1 (90° anti-clockwise):\n");
    printMatrix(mat1, 3);

    printf("\nOriginal mat2:\n");
    printMatrix(mat2, 2);
    rotate90Anticlockwise(mat2, 2);
    printf("Rotated mat2 (90° anti-clockwise):\n");
    printMatrix(mat2, 2);

    return 0;
}

