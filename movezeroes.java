//Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

//Note that you must do this in-place without making a copy of the array.


class Solution {
    public void moveZeroes(int[] nums) {
        int j = 0;

        // Move all non-zero elements to the front
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != 0) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;

                j++;
            }
        }
    }
}

// j represents the position where the next non-zero number should go.
// Traverse the array using i.
// Whenever nums[i] is non-zero, swap it with nums[j].
// This keeps non-zero elements in their original order
// and automatically moves all zeroes to the end.
