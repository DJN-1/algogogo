#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    return ( n % 2 == 1) ? ( n / 2 + 1) * ( n / 2 + 1) : 2 * ( ( n / 2 ) * ( n + 1 ) * ( n / 2 + 1 ) / 3 ) ;
    
}