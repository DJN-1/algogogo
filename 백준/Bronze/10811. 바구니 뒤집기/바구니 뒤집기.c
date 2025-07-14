#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int basket[n];
    for (int i = 0; i < n; i++) {
        basket[i] = i + 1;
    }

    for (int k = 0; k < m; k++) {
        int i, j;
        scanf("%d %d", &i, &j);
        i--; 
        j--; 

        while (i < j) {
            int temp = basket[i];
            basket[i] = basket[j];
            basket[j] = temp;
            i++;
            j--;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", basket[i]);
    }
    printf("\n");

    return 0;
}