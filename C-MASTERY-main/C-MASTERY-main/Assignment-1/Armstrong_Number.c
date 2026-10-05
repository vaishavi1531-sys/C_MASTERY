#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0, digits = 0;

    scanf("%d", &n);
    temp = n;

    if (n == 0)
        digits = 1;
    else
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++)
            power *= digit;
        sum += power;
        temp /= 10;
    }

    if (sum == n)
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}
