#include <stdio.h>
#include <math.h>

int main()
{
    int human;
    scanf("%d", &human);

    int count = (int)sqrt(human);

    printf("%d\n", count);
    return 0;
}
