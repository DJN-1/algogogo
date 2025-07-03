#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    
    long long long_a = a;
    long long long_b = b;
    long long long_temp;
    if(long_a - long_b > 0)
    {
        long_temp = long_a;
        long_a = long_b;
        long_b = long_temp;
    }
    
    return ((long_b * (long_b + 1)) - (long_a * (long_a-1))) / 2;
}