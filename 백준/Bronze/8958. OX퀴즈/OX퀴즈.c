#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //테스트 케이스의 개수
    int num = 0;

    //테스트 케이스의 개수 입력 받기
    scanf("%d", &num);

    //테스트 케이스 공간 할당
    char input[100][81];

    //문자열 한 줄씩 입력
    for (int i = 0; i < num; i++)
    {
        scanf("%s", input[i]);
    }

    //결과 공간 할당
    int* result = (int*)malloc(num * sizeof(int));
    
    //정수 개수만큼 돌면서 비교 
    //한 문자씩 읽고 "O" 면 +1 점 "X"면 +0점
    for (int i = 0; i < num; i++)
    {
        result[i] = 0;
        int score = 0;
        for(int j = 0 ; input[i][j] != '\0' ; j++)
        {
            if (input[i][j] == 'O') {
                score++;
                result[i] += score;
            }
            else {
                score = 0;
            }
        }
    }

    //결과 출력
    for (int i = 0; i < num; i++)
    {
       printf("%d\n", result[i]);
    }


    //할당 해제
    free(result);

    return 0;
}
