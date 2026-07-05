#include <stdio.h>

long long power(int a, int b) {
    if (b == 0) {
        return 1;
    }

    return a * power(a, b - 1);
}

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%lld", power(a, b));

    return 0;
}

// Base case:
// Any number raised to power 0 is 1.

// Recursive case:
// a^b = a * a^(b - 1)
