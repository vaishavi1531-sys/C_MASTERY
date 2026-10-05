#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        long long value = 1;

        for (int space = 0; space < n - i - 1; space++)
            printf(" ");

        for (int j = 0; j <= i; j++) {
            printf("%lld ", value);
            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
