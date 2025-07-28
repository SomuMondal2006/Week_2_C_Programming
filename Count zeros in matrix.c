//Count zeros in matrix
//https://www.geeksforgeeks.org/problems/count-zeros-in-a-sorted-matrix/1


#include <stdio.h>
#include <stdlib.h>

int countZeros(int** A, int N) {
    int row = 0;
    int col = N - 1;
    int count = 0;

    while (row < N && col >= 0) {
        if (A[row][col] == 0) {
            count += (col + 1);
            row++;
        } else {
            col--;
        }
    }

    return count;
}

int main() {
    int N, i, j;
    printf("Enter the size of the matrix (N): ");
    scanf("%d", &N);

    int** A = (int**)malloc(N * sizeof(int*));
    for (i = 0; i < N; i++) {
        A[i] = (int*)malloc(N * sizeof(int));
    }

    printf("Enter the matrix (only 0s and 1s, row-wise):\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int result = countZeros(A, N);
    printf("Total number of zeros: %d\n", result);

    for (i = 0; i < N; i++) {
        free(A[i]);
    }
    free(A);

    return 0;
}

