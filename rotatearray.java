class Solution {
    public void rotate(int[] nums, int k) {
        int n = nums.length;

        // If k is greater than array size,
        // reduce it to the required number of rotations
        k = k % n;

        // Step 1: Reverse the entire array
        reverse(nums, 0, n - 1);

        // Step 2: Reverse the first k elements
        reverse(nums, 0, k - 1);

        // Step 3: Reverse the remaining elements
        reverse(nums, k, n - 1);
    }

    // Helper function to reverse part of the array
    public void reverse(int[] nums, int left, int right) {

        // Use two pointers to swap elements
        while (left < right) {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;

            left++;
            right--;
        }
    }
}
