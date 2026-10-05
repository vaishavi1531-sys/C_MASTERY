#include <stdio.h>

int countDigits(int n) {
    if (n >= -9 && n <= 9)
        return 1;

    return 1 + countDigits(n / 10);
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d\n", countDigits(n));

    return 0;
}
