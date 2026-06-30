#include <stdio.h>

int main() {
    int n, pos;

    // Input the size of the array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position to delete (1-based)
    scanf("%d", &pos);

    // Shift elements one position to the left
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Print the updated array
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
Logic: Left shift method
Read the array size n and its elements.
Read the 1-based position pos.
Convert it to a 0-based index (pos - 1).
Shift all elements after that position one step to the left.
Print the first n - 1 elements of the updated array.

Time Complexity: O(n) (in the worst case, almost all elements are shifted)
Space Complexity: O(1) (no extra array is used; the operation is performed in-place).
*/
