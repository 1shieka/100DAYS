class Solution {
    public void rotate(int[][] matrix) {
        int n = matrix.length;

        // Step 1: Transpose the matrix
        // Swap matrix[i][j] with matrix[j][i]
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        // Step 2: Reverse every row
        for (int i = 0; i < n; i++) {
            int left = 0;
            int right = n - 1;

            while (left < right) {
                int temp = matrix[i][left];
                matrix[i][left] = matrix[i][right];
                matrix[i][right] = temp;

                left++;
                right--;
            }
        }
    }
}


// Interview logic:
// 1. I need to rotate the matrix in-place, so I cannot use another 2D array.
// 2. First, transpose the matrix. This converts rows into columns by swapping matrix[i][j] with matrix[j][i].
// 3. Then, reverse every row using two pointers.
// 4. Transpose + reverse each row gives a 90-degree clockwise rotation.
