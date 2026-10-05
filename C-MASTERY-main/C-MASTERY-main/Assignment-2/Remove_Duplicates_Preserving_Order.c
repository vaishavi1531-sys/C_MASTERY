#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int seen[256] = {0};

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = s[i];
        if (!seen[c]) {
            putchar(s[i]);
            seen[c] = 1;
        }
    }

    putchar('\n');
    return 0;
}
