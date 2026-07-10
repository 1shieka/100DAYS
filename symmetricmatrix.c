#include <stdio.h>

int main() {
    int m, n;

    // Read rows and columns
    scanf("%d %d", &m, &n);
    int matrix[m][n];

    // Read matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // A non-square matrix can never be symmetric
    if (m != n) {
        printf("Not a Symmetric Matrix");
        return 0;
    }

    int isSymmetric = 1;

    /*
      Check only elements above the main diagonal.
      For every matrix[i][j], compare it with matrix[j][i].

      Example:
      matrix[0][1] should equal matrix[1][0]
      matrix[0][2] should equal matrix[2][0]

      We start j from i + 1 because:
      - diagonal elements like matrix[0][0] are always equal to themselves
      - checking both [0][1] and [1][0] would repeat the same comparison
    */
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < n; j++) {

            // If opposite positions are different, matrix is not symmetric
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }

        // Stop checking once a mismatch is found
        if (isSymmetric == 0) {
            break;
        }
    }

    if (isSymmetric == 1) {
        printf("Symmetric Matrix");
    } else {
        printf("Not a Symmetric Matrix");
    }

    return 0;
}
