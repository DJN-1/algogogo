#include <stdio.h>
#include <math.h>

long long solution(long long n) {
    long long root = (long long)sqrt(n);
    if (root * root == n) {
        return (root + 1) * (root + 1);
    } else {
        return -1;
    }
}

int main() {
    long long n;

    long long result = solution(n);

    return result;
}
