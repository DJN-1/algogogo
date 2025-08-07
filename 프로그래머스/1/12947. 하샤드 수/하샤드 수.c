#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    int sum = 0 ;
    int zari = x;
    while(zari > 0)
    {
    // 일의 자리까지 계속 10으로 나눔
    sum += zari % 10;
        zari /= 10;        
    }
    
    return (x % sum == 0);
}