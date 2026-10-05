#include <stdio.h>

int main() {
    int n, m, a[1000], b[1000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for (int i = 0; i < n; i++) {
        int found = 0, alreadyPrinted = 0;

        for (int k = 0; k < i; k++) {
            if (a[k] == a[i]) {
                alreadyPrinted = 1;
                break;
            }
        }

        if (alreadyPrinted)
            continue;

        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                found = 1;
                break;
            }
        }

        if (found)
            printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
