//Dynamic array operations
//https://www.hackerrank.com/challenges/dynamic-array/problem


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    int** seqList = malloc(n * sizeof(int*));
    int* sizes = calloc(n, sizeof(int));
    int* capacities = calloc(n, sizeof(int));

    int i;
    for (i = 0; i < n; i++) {
        seqList[i] = NULL;
    }

    int lastAnswer = 0;

    int* results = malloc(q * sizeof(int));
    int resultCount = 0;

    for (i = 0; i < q; i++) {
        int type, x, y;
        scanf("%d %d %d", &type, &x, &y);

        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            if (sizes[idx] == capacities[idx]) {
                capacities[idx] = capacities[idx] == 0 ? 1 : capacities[idx] * 2;
                seqList[idx] = realloc(seqList[idx], capacities[idx] * sizeof(int));
            }
            seqList[idx][sizes[idx]++] = y;
        } else if (type == 2) {
            int value = seqList[idx][y % sizes[idx]];
            lastAnswer = value;
            results[resultCount++] = value;
        }
    }

    for (i = 0; i < resultCount; i++) {
        printf("%d\n", results[i]);
    }

    for (i = 0; i < n; i++) {
        free(seqList[i]);
    }
    free(seqList);
    free(sizes);
    free(capacities);
    free(results);

    return 0;
}

