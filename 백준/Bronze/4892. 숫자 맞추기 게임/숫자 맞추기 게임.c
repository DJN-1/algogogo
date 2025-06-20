#include <stdio.h>
#include <math.h>

int main()
{
    int n0;
    int count = 1;

    while (1)
    {
        scanf("%d", &n0);
        if (n0 == 0)
            break;

        int n1 = 3 * n0;
        int n2;

        if (n1 % 2 == 0)
        {
            n2 = n1 / 2;
        }
        else
        {
            n2 = (n1 + 1) / 2;
        }

        int n3 = 3 * n2;
        int n4 = n3 / 9;

        if (n1 % 2 == 0)
        {
            printf("%d. even %d\n", count, n4);
        }
        else
        {
            printf("%d. odd %d\n", count, n4);
        }

        count++;
    }

    return 0;
}
