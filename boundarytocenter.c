#include <stdio.h>

int main() {
    int r, c;

    // Read number of rows and columns
    scanf("%d %d", &r, &c);

    int matrix[r][c];

    // Read matrix elements
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Four boundaries of the matrix
    int top = 0;
    int bottom = r - 1;
    int left = 0;
    int right = c - 1;

    // Continue until all layers are visited
    while (top <= bottom && left <= right) {

        // 1. Move left to right on the top row
        for (int i = left; i <= right; i++) {
            printf("%d ", matrix[top][i]);
        }
        top++;

        // 2. Move top to bottom on the right column
        for (int i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--;

        // Check if bottom row still exists
        if (top <= bottom) {

            // 3. Move right to left on the bottom row
            for (int i = right; i >= left; i--) {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        }

        // Check if left column still exists
        if (left <= right) {

            // 4. Move bottom to top on the left column
            for (int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }

    return 0;
}


// Interview logic:
//
// 1. Keep four boundaries: top, bottom, left and right.
// 2. Traverse the top row from left to right.
// 3. Traverse the right column from top to bottom.
// 4. Traverse the bottom row from right to left.
// 5. Traverse the left column from bottom to top.
// 6. After each traversal, move that boundary inward.
// 7. Repeat until all elements are visited.
