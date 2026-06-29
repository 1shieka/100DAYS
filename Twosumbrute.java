 /*
        Logic: Using Brute Force O(n²)T O(1)S
        1. Take one element at a time.
        2. Compare it with every element after it.
        3. If their sum equals the target,
           return their indices.
  */


class Solution {
    public int[] twoSum(int[] nums, int target) {
        for (int i = 0; i < nums.length - 1; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (nums[i] + nums[j] == target) {
                    return new int[]{i, j};
                }
            }
        }
        return new int[]{};
    }
}


