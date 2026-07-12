#include <stdio.h>

int main() {
    int n;

    // Read size of square matrix
    scanf("%d", &n);

    int matrix[n][n];

    // Read matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Assume matrix is identity initially
    int isIdentity = 1;

    // Check every element of the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            // Diagonal elements must be 1
            if (i == j && matrix[i][j] != 1) {
                isIdentity = 0;
                break;
            }

            // Non-diagonal elements must be 0
            if (i != j && matrix[i][j] != 0) {
                isIdentity = 0;
                break;
            }
        }

        // Stop checking if condition already failed
        if (isIdentity == 0) {
            break;
        }
    }

    // Print result
    if (isIdentity == 1) {
        printf("Identity Matrix");
    } else {
        printf("Not an Identity Matrix");
    }

    return 0;
}
