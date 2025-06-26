#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int m, a, b;
    int ball = 1;

    // 컵 바꾼 횟수
    scanf("%d", &m);  

    for (int i = 0; i < m; i++) 
    {
        scanf("%d %d", &a, &b);

        if (a == ball)
            ball = b;
        else if (b == ball)
            ball = a;
    }
    // 최종 컵 번호 출력
    printf("%d\n", ball);
    return 0;
}