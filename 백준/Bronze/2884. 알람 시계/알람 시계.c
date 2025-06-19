#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour = 0;
    int minute = 0;

    // 알람 시간 맞추기
    scanf("%d %d", &hour, &minute);

    if (minute < 45)
    {
        minute = minute + 60 - 45;
        hour = (hour == 0) ? hour = 23 : hour - 1;
    }
    else
    {
        minute = minute - 45;
    }
    
    // 변경된 시간 출력
    printf("%d %d\n", hour, minute);

    return 0;
}
