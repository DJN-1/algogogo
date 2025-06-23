#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int is_generated[10001] = { 0 }; 

    for (int i = 1; i <= 10000; i++) 
    {
        int n = i;
        int sum = n;

        // d(n) 계산
        while (n > 0) 
        {
            sum += n % 10;
            n /= 10;
        }

        if (sum <= 10000) 
        {
            is_generated[sum] = 1;
        }
    }

    for (int i = 1; i <= 10000; i++) 
    {
        if (is_generated[i] == 0) 
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}