#include <stdio.h>

int main() {

    // 입력 값
    int num;
    scanf("%d", &num);

    // used -> B 체킹용
    int A[100], B[100], used[100] = { 0 };  
    
    // 최종 합
    int sum = 0;

    // A 입력
    for (int i = 0; i < num; i++) 
    {
        scanf("%d", &A[i]);
    }

    // B 입력
    for (int i = 0; i < num; i++) 
    {
        scanf("%d", &B[i]);
    }

    // A를 오름차순 정렬 (버블 정렬)
    for (int i = 0; i < num - 1; i++) 
    {
        for (int j = i + 1; j < num; j++) 
        {
            if (A[i] > A[j]) 
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    // A의 작은 값부터 하나씩, B에서 가장 큰 값에 곱하기
    for (int i = 0; i < num; i++) 
    {
        int max = -1;
        int index = -1;

        for (int j = 0; j < num; j++) 
        {
            if (!used[j] && B[j] > max) 
            {
                max = B[j];
                index = j;
            }
        }
        // B 값 사용 처리 (마킹용)
        used[index] = 1;  
        
        sum += A[i] * B[index];
    }

    printf("%d\n", sum);
    return 0;
}
