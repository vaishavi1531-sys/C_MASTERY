#include <stdio.h>

int main() {
    int n, a[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    long long current = a[0];
    long long maximum = a[0];

    for (int i = 1; i < n; i++) {
        if (current + a[i] > a[i])
            current = current + a[i];
        else
            current = a[i];

        if (current > maximum)
            maximum = current;
    }

    printf("%lld\n", maximum);

    return 0;
}
