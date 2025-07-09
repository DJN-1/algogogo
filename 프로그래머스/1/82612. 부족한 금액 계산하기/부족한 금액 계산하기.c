#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long answer = -1;
    
    long long sum = 0;
    
    for (int i = 1; i < count + 1 ; i++)
    {
        sum = sum + price * i;   
    } 
    
    if(sum > money)
        return answer = sum - money;
    else
        return answer = 0;

}