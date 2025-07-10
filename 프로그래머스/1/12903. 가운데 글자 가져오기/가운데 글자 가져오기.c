#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    char* answer;
    answer = (char*)malloc(sizeof(char)*2);
        
    int len = strlen(s); // 길이 찾기
     
    if(len % 2 == 0){ //짝수인 경우
        answer[0] = s[len/2 - 1];
        answer[1] = s[len/2];
        answer[2] = NULL; 
    }else{
        answer[0] = s[len/2];
        answer[1] = NULL;
    }
    return answer;
}