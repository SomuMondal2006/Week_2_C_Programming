//Add two polynomials
//https://www.geeksforgeeks.org/dsa/program-add-two-polynomials/


#include <stdio.h>

void addPolynomials(int A[], int n, int B[], int m, int result[]) {
    int size = (n > m) ? n : m;
    int i;

    for (i = 0; i < size; i++)
        result[i] = 0;

    for (i = 0; i < n; i++)
        result[i] += A[i];

    for (i = 0; i < m; i++)
        result[i] += B[i];
}

void printPolynomial(int poly[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d", poly[i]);
        if (i != 0)
            printf("x^%d", i);
        if (i != size - 1)
            printf(" + ");
    }
    printf("\n");
}

int main() {
    int A[] = {5, 0, 10, 6};
    int B[] = {1, 2, 4};
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);
    int size = (n > m) ? n : m;
    int result[10];  

    addPolynomials(A, n, B, m, result);

    printf("Sum of polynomials: ");
    printPolynomial(result, size);

    return 0;
}

