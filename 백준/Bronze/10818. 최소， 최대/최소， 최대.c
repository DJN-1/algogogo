#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;

    //정수의 개수
    scanf("%d", &num);

    int* input = (int*)malloc(num * sizeof(int));

    //정수 입력
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &input[i]);
    }
    int max = input[0];
    int min = input[0];
    //최대값, 최소값 찾기
    //정수 개수만큼 돌면서 비교 
    for (int i = 0; i < num; i++)
    {
        max = (input[i] > max) ? input[i] : max;
        min = (input[i] < min) ? input[i] : min;
    }

    //결과 출력
    printf("%d %d", min, max);

    free(input);

    return 0;
}
