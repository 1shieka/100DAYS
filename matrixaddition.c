//Write a program to perform addition of two matrices having the same dimensions. 
//The sum of two matrices is obtained by adding corresponding elements of the matrices.
  
#include <stdio.h>

int main() {
    int m, n;

    // Read number of rows and columns
    scanf("%d %d", &m, &n);

    int matrix1[m][n];
    int matrix2[m][n];
    int sum[m][n];

    // Read first matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Read second matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add corresponding elements of both matrices
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the resultant matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", sum[i][j]);

            // Print space after every element except the last one
            if (j != n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}


