#include <stdio.h>

long long reverseNumber(long long n, long long reversed) {
    if (n == 0)
        return reversed;

    return reverseNumber(n / 10, reversed * 10 + n % 10);
}

int main() {
    long long n;

    scanf("%lld", &n);

    if (n < 0)
        printf("-");

    if (n < 0)
        n = -n;

    printf("%lld\n", reverseNumber(n, 0));

    return 0;
}
