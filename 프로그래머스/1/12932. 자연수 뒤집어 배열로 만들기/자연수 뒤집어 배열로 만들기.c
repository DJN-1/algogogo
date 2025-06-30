#include <stdio.h>
#include <stdlib.h>

int result_size; 

int* solution(long long n) {
    int* answer = (int*)malloc(sizeof(int) * 20);
    result_size = 0;

    if (n == 0) {
        answer[result_size++] = 0;
    } else {
        while (n > 0) {
            answer[result_size++] = n % 10;
            n /= 10;
        }
    }

    return answer;
}
