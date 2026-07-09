class Solution {
    public int[][] transpose(int[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;

        // Transpose has cols rows and rows columns
        int[][] ans = new int[cols][rows];

        // matrix[i][j] becomes ans[j][i]
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                ans[j][i] = matrix[i][j];
            }
        }

        return ans;
    }
}

// Interview logic:
// 1. Original matrix has rows × cols size.
// 2. Transposed matrix will have cols × rows size.
// 3. Every element at matrix[i][j] moves to ans[j][i].
// 4. Use nested loops to visit every element and swap its row and column index.
