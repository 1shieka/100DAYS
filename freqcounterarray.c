#include <stdio.h>

int main() {
    int n;

    // Read size of array
    scanf("%d", &n);

    int arr[n];
    int visited[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Initially no element is counted
        visited[i] = 0;
    }

    // Count frequency of each distinct element
    for (int i = 0; i < n; i++) {

        // Skip if this element was already counted
        if (visited[i] == 1) {
            continue;
        }

        int count = 1;

        // Search for same elements after index i
        for (int j = i + 1; j < n; j++) {

            // Same element found
            if (arr[i] == arr[j]) {
                count++;

                // Mark duplicate as visited
                visited[j] = 1;
            }
        }

        // Print element and its frequency
        printf("%d:%d", arr[i], count);

        if (i != n - 1) {
            printf(" ");
        }
    }

    return 0;
}
