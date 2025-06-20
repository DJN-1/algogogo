#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int* num = (int*)malloc(sizeof(int) * n);
    

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &num[i]);
    }

    // 버블 정렬
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - 1 - i; j++) 
        {
            if (num[j] > num[j + 1]) 
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) 
    {
        printf("%d\n", num[i]);
    }

    free(num); // 메모리 해제
    return 0;
}