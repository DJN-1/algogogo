#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    // 입력 받을 수
    int n = 0;
    
    // 약수의 합    
    long long sum = 0;

    // 갑 입력 받기
    scanf("%d", &n);
    
    for(long long i = 1 ; i <= n ; i++)
    {
        long long cnt = n / i;
        sum += i * cnt;
        
    }
    printf("%lld\n", sum);
    
    return 0;
}