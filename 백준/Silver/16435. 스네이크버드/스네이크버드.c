#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



int main()
{
    int fruit = 0;
    int length = 0;

    scanf("%d %d", &fruit, &length);

    int* fruits_h = (int*)malloc(fruit * sizeof(int));

    for (int i = 0; i < fruit; i++)
    {
        scanf("%d", &fruits_h[i]);
    }

    int temp = 0;
    for (int i = 0; i < fruit - 1; i++)
    {
        for (int j = 0; j < fruit - 1 - i; j++)
        {
            if (fruits_h[j] > fruits_h[j + 1])
            {
                temp = fruits_h[j];
                fruits_h[j] = fruits_h[j + 1];
                fruits_h[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < fruit; i++)
    {
        if (fruits_h[i] <= length) {
            length++;
        }
    }
    
    printf("%d\n", length);
    
    return 0;
}
