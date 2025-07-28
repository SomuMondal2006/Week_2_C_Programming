//Print matrix in spiral form
//https://www.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1


#include <stdio.h>
#define MAX 1000
void spiralOrder(int mat[MAX][MAX], int n, int m) {
    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;
    int i;
    while (top <= bottom && left <= right) {
        for (i = left; i <= right; i++)
            printf("%d ", mat[top][i]);
        top++;
        for (i = top; i <= bottom; i++)
            printf("%d ", mat[i][right]);
        right--;
        if (top <= bottom) {
            for (i = right; i >= left; i--)
                printf("%d ", mat[bottom][i]);
            bottom--;
        }
        if (left <= right) {
            for (i = bottom; i >= top; i--)
                printf("%d ", mat[i][left]);
            left++;
        }
    }
}
int main() {
    int mat1[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int mat2[3][3] = {
        {2, 7, 10},
        {5, 1, 3},
        {4, 2, 8}
    };
    int mat3[2][4] = {
        {32, 44, 27, 23},
        {54, 28, 50, 62}
    };
    printf("Spiral order of mat1:\n");
    spiralOrder((int (*)[MAX])mat1, 4, 4);
    printf("\n\n");
    printf("Spiral order of mat2:\n");
    spiralOrder((int (*)[MAX])mat2, 3, 3);
    printf("\n\n");
    printf("Spiral order of mat3:\n");
    spiralOrder((int (*)[MAX])mat3, 2, 4);
    printf("\n");
    return 0;
}

