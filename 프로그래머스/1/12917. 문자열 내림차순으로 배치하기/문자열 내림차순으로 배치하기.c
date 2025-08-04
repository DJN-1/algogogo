#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int s_len = strlen(s);
    char* answer = (char*)malloc(sizeof(char)* (s_len+1));
    strcpy(answer, s);
    
    for(int i = 0; i < s_len - 1 ; i++)
    {
        for(int j = 0 ; j < s_len - i - 1 ; j++)
        {
            if((int)answer[j] < (int)answer[j+1])
            {
                char temp = answer[j];
                answer[j] = answer[j+1];
                answer[j+1] = temp;
            }
        }
    }
    return answer;
}