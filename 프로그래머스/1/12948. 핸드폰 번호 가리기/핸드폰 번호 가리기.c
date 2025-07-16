#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* phone_number) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(strlen(phone_number)+1);
    
    // 입력 받은 전화번호 -4 앞까지만 *로 출력, 이후는 입력 받은 숫자로 출력한다.
    // 예를 들어 13자리 번호를 받았으면 인덱스 값은 0 ~ 12일거고, 나는 0 ~ 8까지 *로 출력, 9부터 12까지는
    // 입력 받은 숫자 그대로 출력하도록 한다.
    
    int len = strlen(phone_number);
    
    for (int i = 0; i <  len ; i++)
    {
        if(i < len - 4)
            answer[i] = '*';
        else
            answer[i] = phone_number[i];
    }
    
    answer[len] = '\0';
    
    return answer;
}