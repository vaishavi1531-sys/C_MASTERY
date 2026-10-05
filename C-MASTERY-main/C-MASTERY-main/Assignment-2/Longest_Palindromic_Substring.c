#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int start = 0, maxLen = 1;
    int n;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    n = strlen(s);

    if (n == 0) {
        printf("\n");
        return 0;
    }

    for (int center = 0; center < n; center++) {
        int left = center, right = center;
        while (left >= 0 && right < n && s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }

        left = center;
        right = center + 1;
        while (left >= 0 && right < n && s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
    }

    for (int i = start; i < start + maxLen; i++)
        putchar(s[i]);

    putchar('\n');
    return 0;
}
