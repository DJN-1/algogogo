#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result = 0;
    int num = 0;
    int find = 0;


    //정수의 개수
    scanf("%d", &num);

    int* input = (int*)malloc(num * sizeof(int));

    //정수 입력
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &input[i]);
    }

    //찾으려고 하는 정수
    scanf("%d", &find);

    for (int i = 0; i < num; i++)
    {
        result = (input[i] == find) ? result + 1 : result;
    }

    //결과 출력
    printf("%d", result);

    return 0;
}
