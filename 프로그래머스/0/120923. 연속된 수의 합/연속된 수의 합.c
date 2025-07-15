#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num, int total) {
    
    int* answer = (int*)malloc(sizeof(int) * num);
    
    
    int start = (total / num) - (num - 1) / 2;
    
   
    for (int i = 0; i < num; i++) {
        answer[i] = start + i;
    }
    
    return answer;
}