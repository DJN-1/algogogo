#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    
    int temp = 0;
    
    if (a - b > 0)
    {
        temp = a;
        a = b ;
        b = temp;
    }
    
    for (int i = 0; i + a <= b ; i++)
    {
        answer = answer + i + a;
    }
    return answer;
}