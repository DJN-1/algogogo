#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[10];
    int remain[42] = { 0 }; 
    int count = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        int r = arr[i] % 42;
        remain[r] = 1; 
    }

    for (int i = 0; i < 42; i++) {
        if (remain[i] == 1) {
            count++;
        }
    }

    printf("%d\n", count);
    
    return 0;
}