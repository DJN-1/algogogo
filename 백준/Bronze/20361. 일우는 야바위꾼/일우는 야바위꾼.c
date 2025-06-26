#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int N, X, K;
    scanf("%d %d %d", &N, &X, &K);

    for (int i = 0; i < K; i++) 
    {
        int A, B;
        scanf("%d %d", &A, &B);
        if (X == A) X = B;
        else if (X == B) X = A;
    }

    printf("%d\n", X);
    return 0;
}