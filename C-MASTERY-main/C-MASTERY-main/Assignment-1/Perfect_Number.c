#include <stdio.h>

int main() {
    int n, sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }

    if (n > 1 && sum == n)
        printf("Perfect Number\n");
    else
        printf("Not a Perfect Number\n");

    return 0;
}
