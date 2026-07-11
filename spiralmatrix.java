import java.util.*;

class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {

        List<Integer> ans = new ArrayList<>();

        int rows = matrix.length;
        int cols = matrix[0].length;

        // Define four boundaries of the matrix
        int top = 0;
        int bottom = rows - 1;
        int left = 0;
        int right = cols - 1;

        // Continue until all boundaries cross
        while (top <= bottom && left <= right) {

            // 1. Traverse top row from left to right
            for (int i = left; i <= right; i++) {
                ans.add(matrix[top][i]);
            }

            // Top row is completed, move boundary down
            top++;

            // 2. Traverse right column from top to bottom
            for (int i = top; i <= bottom; i++) {
                ans.add(matrix[i][right]);
            }

            // Right column is completed, move boundary left
            right--;

            // Check if bottom row still exists
            if (top <= bottom) {

                // 3. Traverse bottom row from right to left
                for (int i = right; i >= left; i--) {
                    ans.add(matrix[bottom][i]);
                }

                // Bottom row is completed, move boundary up
                bottom--;
            }

            // Check if left column still exists
            if (left <= right) {

                // 4. Traverse left column from bottom to top
                for (int i = bottom; i >= top; i--) {
                    ans.add(matrix[i][left]);
                }

                // Left column is completed, move boundary right
                left++;
            }
        }

        return ans;
    }
}

// Interview logic:
//
// I maintain four boundaries: top, bottom, left and right.
//
// First, I traverse the top row from left to right.
// Then, I traverse the right column from top to bottom.
// Then, if a bottom row still exists, I traverse it right to left.
// Finally, if a left column still exists, I traverse it bottom to top.
//
// After completing each direction, I move that boundary inward.
//
// This repeats layer by layer until all elements are visited.
