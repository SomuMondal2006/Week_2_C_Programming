//Check if matrix is sparse
//https://www.geeksforgeeks.org/dsa/check-given-matrix-sparse-not/


#include <stdio.h>

int main() {
    int m, n;
    int i, j;
    int zeroCount = 0;

    printf("Enter number of rows and columns (m n): ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];  

    printf("Enter the matrix elements (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0)
                zeroCount++;
        }
    }

    int total = m * n;

    if (zeroCount > total / 2)
        printf("Yes\n"); 
    else
        printf("No\n");  

    return 0;
}

