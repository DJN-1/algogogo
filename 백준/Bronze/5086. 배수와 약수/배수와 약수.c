#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first = 0;
    int second = 0;

    char* result;


    while (1)
    {
        scanf("%d %d", &first, &second);
        if (first == 0 && second == 0)
        {
            break;
        }
        result = (second % first == 0) ? "factor" :
            (first % second == 0) ? "multiple" : "neither";

        printf("%s\n", result);
    }
}