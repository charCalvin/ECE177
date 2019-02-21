#include <stdio.h>

int main() {
    int Y, M, D, C;

    printf("Enter Year, Month, Day: ");
    scanf("%d%d%d", &Y, &M, &D);

    if (M <= 2) {
        M = M + 12;
        Y = Y - 1;
    }
    M = M - 2;
    C = Y / 100;                                   // Discard remainder
    printf("%d\n", (11 * (Y%19) + 38 + C/3 + C/4 - C + M + D) % 30);

    return 0;
}
