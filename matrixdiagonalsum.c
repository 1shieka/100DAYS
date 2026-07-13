#include <stdio.h>

int main() {
    int m, n;
    int sum = 0;

    // Read number of rows and columns
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    // Read matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Traverse the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            // Primary diagonal elements have same row and column index
            if (i == j) {
                sum = sum + matrix[i][j];
            }
        }
    }

    // Print diagonal sum
    printf("%d", sum);

    return 0;
}
