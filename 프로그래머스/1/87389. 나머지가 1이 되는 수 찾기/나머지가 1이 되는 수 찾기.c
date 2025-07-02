#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    int a = 0;
    int b = 0;
    for (int i = 1; i < n ; i++)
    {
        a = n % i;
        if (a == 1 && answer == 0) 
            answer = i;
        if (a == 1 && answer != 0 && answer > i)
            answer = i;
    }
    return answer;
}
