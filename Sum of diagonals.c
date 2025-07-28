//Sum of diagonals
//https://www.geeksforgeeks.org/problems/sum-of-diagonals-1587115621/1


#include <stdio.h>

int sumDiagonal(int N, int M[50][50]);

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int M[50][50]; 
        int i, j;

        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &M[i][j]);
            }
        }

        printf("%d\n", sumDiagonal(N, M));
    }

    return 0;
}

int sumDiagonal(int N, int M[50][50]) {
    int sum = 0;
    int i;

    for (i = 0; i < N; i++) {
        sum += M[i][i];
    }

    return sum;
}

