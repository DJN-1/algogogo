#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //테스트 케이스의 개수
    int input = 0;
    char str[100];
    int result = 0;

    //테스트 케이스의 개수 입력 받기
    scanf("%d", &input);

    //공백없이 연속된 숫자 입력
    scanf("%s", str);

    //테스트 케이스 공간 할당
    int* numbers = (int*)malloc(input * sizeof(int));

    //문자열 하나씩 숫자로 변경
    for (int i = 0; i < input; i++)
    {
        numbers[i] = str[i] - '0';
    }

    for (int i = 0; i < input; i++)
    {
        result += numbers[i];
    }

    printf("%d", result);

    //할당 해제
    free(numbers);

    return 0;
}
