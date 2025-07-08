#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int answer = 0;
    
    long n = num;
    
    if (n == 1)
        answer = 0;
    else 
    {
        while(n != 1)
        {    
            if(n % 2 == 0)
            {
                n = n / 2;   
            } 
            else 
            {
                n = ( n * 3 ) + 1;
            }
        
                answer = answer + 1;
        }
            
    }
    if(answer >= 500) answer = -1;
                 
    
    return answer;
}