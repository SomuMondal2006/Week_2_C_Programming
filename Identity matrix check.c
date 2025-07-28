//Identity matrix check
//https://www.geeksforgeeks.org/dsa/program-print-identity-matrix/


#include <stdio.h>
#include <stdbool.h>

bool isIdentityMatrix(int mat[][100], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j && mat[i][j] != 1) {
                return false;
            }
            else if (i != j && mat[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n, i, j;
    int mat[100][100];

    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);

    printf("Enter elements of %d x %d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    if (isIdentityMatrix(mat, n))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}

