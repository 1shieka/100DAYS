#include <stdio.h>

/*
    Recursive power function
    Idea:
    a^b = a * a^(b - 1)

    Base case:
    Any number raised to power 0 is 1.
    Example: 5^0 = 1

    This approach makes one recursive call for every exponent,
    so its time complexity is O(b).
    
*/
long long power(int a, int b) {
    
    // Base case: stops recursion
    if (b == 0) {
        return 1;
    }

    // Recursive case: Multiply current base with result of smaller subproblem
    return a * power(a, b - 1);
}

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    /*
        Dry Run Example for input: 2 5

        power(2, 5)
        = 2 * power(2, 4)
        = 2 * 2 * power(2, 3)
        = 2 * 2 * 2 * power(2, 2)
        = 2 * 2 * 2 * 2 * power(2, 1)
        = 2 * 2 * 2 * 2 * 2 * power(2, 0)
        = 32
        
    */
    printf("%lld", power(a, b));

    return 0;
}
