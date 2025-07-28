#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    
    // 양꼬치 1인분 12000원 n개
    // 음료수 1개 2000원 k개
    
    if(n < 10)
    // 10개 미만으로 먹었을 때
    answer = 12000 * n + k * 2000;
    // 10개 이상으로 먹었을 때
    else
    // 10개 마다 2000원 씩 차감
    answer = 12000 * n + k * 2000 - (n / 10) * 2000;   
        
    return answer;
}