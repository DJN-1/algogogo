#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>


int main() {

    time_t now;                 // 현재 시간 (초 단위)
    struct tm* local;           // 지역 시간 구조체 포인터
    char buf[100];              // 출력용 문자열 버퍼

    time(&now);                 // 현재 시간 얻기
    local = localtime(&now);    // 지역 시간으로 변환

    // 원하는 형식으로 날짜 출력 (예: YYYY-MM-DD)
    strftime(buf, sizeof(buf), "%Y-%m-%d", local);
    printf("%s\n", buf);

    return 0;
}
