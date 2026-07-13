class Solution {
    public void setZeroes(int[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;

        // Stores which rows and columns need to become zero
        boolean[] zeroRow = new boolean[rows];
        boolean[] zeroCol = new boolean[cols];

        // Step 1: Find all zero elements
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                // If zero is found, mark its row and column
                if (matrix[i][j] == 0) {
                    zeroRow[i] = true;
                    zeroCol[j] = true;
                }
            }
        }

        // Step 2: Update the matrix
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                // Make element zero if its row or column was marked
                if (zeroRow[i] || zeroCol[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
}
