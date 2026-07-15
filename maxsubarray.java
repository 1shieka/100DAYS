//Kadane's Algorithm
//Given an integer array nums, find the subarray with the largest sum, and return its sum.

class Solution {
    public int maxSubArray(int[] nums) {

        // Best sum ending at the current position
        int currentSum = nums[0];

        // Maximum sum found so far
        int maxSum = nums[0];

        for (int i = 1; i < nums.length; i++) {

            // Decide whether to start a new subarray
            // or continue the previous subarray
            if (nums[i] > currentSum + nums[i]) {
                currentSum = nums[i];
            } else {
                currentSum = currentSum + nums[i];
            }

            // Update maximum sum if current sum is greater
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }

        return maxSum;
    }
}

// 1. currentSum stores the best subarray sum ending at current index.
// 2. At every element, I have two choices:  start a new subarray from nums[i]  OR   continue the previous subarray.
// 3. I compare both values using an if-else condition.
// 4. Then I compare currentSum with maxSum.
// 5. If currentSum is greater, I update maxSum.
