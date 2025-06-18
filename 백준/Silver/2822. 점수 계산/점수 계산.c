#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    //문제 번호
    int num;
    //문제 점수
    int score;
} Test;


int main()
{
    // 문제 번호, 점수 저장하는 구조체 선언
    Test test[8];

    // 문제 번호 오름차순 정렬용 배열
    int top[8];

    // 각 점수 입력
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &test[i].score);
        test[i].num = i + 1;
    }
    Test temp;
    // 점수 높은 순서로 정렬
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 7 - i;j++)
        {
            if (test[j].score < test[j + 1].score)
            {
                temp = test[j];
                test[j] = test[j + 1];
                test[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        top[i] = test[i].num;
    }
    int num_temp;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (top[j] > top[j + 1]) {
                num_temp = top[j];
                top[j] = top[j + 1];
                top[j + 1] = num_temp;
            }
        }
    }
    // top 5 합
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += test[i].score;
    }
    printf("%d ", sum);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", top[i]);
    }
    
    return 0;
}
