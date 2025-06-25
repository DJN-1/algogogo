#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int N, M, num;
	scanf("%d %d", &N, &M);
	int a[100][100];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &num);
			a[i][j] += num;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

}