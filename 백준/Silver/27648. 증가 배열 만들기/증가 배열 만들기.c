#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M, K;
    if (scanf("%d %d %d", &N, &M, &K) != 3) 
        return 0;

    //최소한 가지고 있어야 하는 값보다 작을 경우 "NO"
    int min = N + M - 1;
    if (K < min) 
    {
        printf("NO\n");
        return 0;
    }

    printf("YES\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            // i, j 모두 0부터 시작하므로 1부터 시작하기 위해 +1
            printf("%d", i + j + 1);
            if (j < M - 1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
