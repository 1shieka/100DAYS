/*
Given an m x n matrix, return true if the matrix is Toeplitz. Otherwise, return false.
A matrix is Toeplitz if every diagonal from top-left to bottom-right has the same elements.
Input: matrix = [[1,2,3,4],[5,1,2,3],[9,5,1,2]]
Output: true
Explanation:
In the above grid, the diagonals are:
"[9]", "[5, 5]", "[1, 1, 1]", "[2, 2, 2]", "[3, 3]", "[4]".
In each diagonal all elements are the same, so the answer is True.
*/

class Solution {
    public boolean isToeplitzMatrix(int[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;

        /*
         Every element except those in the first row and first column
         should be equal to its top-left diagonal element.

         matrix[i][j] should equal matrix[i - 1][j - 1]
        */
        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < cols; j++) {

                // If any diagonal pair is different, matrix is not Toeplitz
                if (matrix[i][j] != matrix[i - 1][j - 1]) {
                    return false;
                }
            }
        }

        // All diagonals have matching values
        return true;
    }
}

// Interview logic:
// 1. In a Toeplitz matrix, every top-left to bottom-right diagonal contains the same value.
// 2. For each cell matrix[i][j], compare it with the cell diagonally above-left: matrix[i - 1][j - 1].
// 3. If any pair is different, return false.
// 4. If all comparisons match, return true.
