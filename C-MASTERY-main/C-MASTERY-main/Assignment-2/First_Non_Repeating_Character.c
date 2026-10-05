#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int freq[256] = {0};

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    for (int i = 0; s[i] != '\0'; i++)
        freq[(unsigned char)s[i]]++;

    for (int i = 0; s[i] != '\0'; i++) {
        if (freq[(unsigned char)s[i]] == 1) {
            printf("%c\n", s[i]);
            return 0;
        }
    }

    printf("No non-repeating character\n");
    return 0;
}
