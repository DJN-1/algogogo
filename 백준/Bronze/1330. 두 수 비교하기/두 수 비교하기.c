#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;

    scanf("%d %d", &a, &b);
    
    char* c = (a > b) ? ">" : (a == b) ? "==" : "<";

    printf("%s", c);

    return 0;
}

