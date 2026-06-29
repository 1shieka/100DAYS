#include <stdio.h>

int main() {
    int n, pos, x;

    scanf("%d", &n);

    int arr[n + 1];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &pos);
    scanf("%d", &x);

    // Shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[pos - 1] = x;

    // Print updated array
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
    Logic Flow:
    1. Read the array.
    2. Start from the last element and move backwards.
    3. Shift every element one position to the right until the insertion position.
    4. Place the new element at index (pos - 1).
    5. Print the updated array.
*/
