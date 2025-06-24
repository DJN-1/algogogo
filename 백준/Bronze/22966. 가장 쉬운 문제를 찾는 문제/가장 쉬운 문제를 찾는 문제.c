#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    // 문제 수 입력 받기
    int N;
    scanf("%d", &N);

    // 제목
    char title[101];
    // 난이도
    int diff;

    char easiest[101] = "";
    int minDiff = 5;

    for (int i = 0; i < N; i++) 
    {
        scanf("%s %d", title, &diff);
        if (diff < minDiff) 
        {
            minDiff = diff;

            // 최솟값 갱신 시 제목 복사
            snprintf(easiest, sizeof(easiest), "%s", title);
        }
    }

    printf("%s\n", easiest);
    return 0;
}
