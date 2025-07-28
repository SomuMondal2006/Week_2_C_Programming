//Multiply two polynomials
//https://www.geeksforgeeks.org/problems/multiply-two-polynomals0721/1


#include <stdio.h>
#define MAX 2000

void multiplyPolynomials(int a[], int n, int b[], int m, int result[]) {
    int i, j;

    for (i = 0; i < n + m - 1; i++) {
        result[i] = 0;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            result[i + j] += a[i] * b[j];
        }
    }
}

int main() {
    int A[] = {5, 0, 10, 6};
    int B[] = {1, 2, 4};
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);
    int result[MAX];
    int i;

    multiplyPolynomials(A, n, B, m, result);

    printf("Output: ");
    for (i = 0; i < n + m - 1; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

