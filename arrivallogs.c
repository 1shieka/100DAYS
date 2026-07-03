#include <stdio.h>

int main() {
    int p, q;

    // Read size of first sorted array
    scanf("%d", &p);

    int a[p];

    // Read elements of first sorted array
    for (int i = 0; i < p; i++) {
        scanf("%d", &a[i]);
    }

    // Read size of second sorted array
    scanf("%d", &q);

    int b[q];

    // Read elements of second sorted array
    for (int i = 0; i < q; i++) {
        scanf("%d", &b[i]);
    }

    int i = 0, j = 0;

    // Compare elements from both arrays until one array is finished
    while (i < p && j < q) {
        if (a[i] <= b[j]) {
            printf("%d ", a[i]);
            i++;
        } else {
            printf("%d ", b[j]);
            j++;
        }
    }

    // Print remaining elements of the first array
    while (i < p) {
        printf("%d ", a[i]);
        i++;
    }

    // Print remaining elements of the second array
    while (j < q) {
        printf("%d ", b[j]);
        j++;
    }

    return 0;
}

/*
    Use two pointers: i for the first sorted array
    and j for the second sorted array.

    Compare the current elements of both arrays.

    Print the smaller element and move its pointer forward.

    When one array is fully processed, print all remaining
    elements of the other array.
*/
