/*
Logic:
1. Create a HashMap to store each number and its index.
2. Traverse the array.
3. For every element, calculate its complement (target - current element).
4. If the complement is already in the HashMap, return both indices.
5. Otherwise, store the current element and its index.
6. Continue until the pair is found.
*/

import java.util.HashMap; // Import HashMap class
class Solution {
    public int[] twoSum(int[] nums, int target) { // Function returns indices of two numbers
        HashMap<Integer, Integer> map = new HashMap<>(); // HashMap stores: <number, index>

        for (int i = 0; i < nums.length; i++) { // Traverse the array one element at a time
            int complement = target - nums[i]; // Calculate the number needed to reach the target

            if (map.containsKey(complement)) { // Before map.put() check if the required complement is already in the HashMap, prevents using the same element twice. 
                return new int[]{map.get(complement), i};  // Return the index of the complement and the current index
            }

            map.put(nums[i], i);  // Store the current number and its index in the HashMap, allows future elements to find it as their complement. 
        }

        return new int[]{};
        // Return an empty array (this line is never reached as the problem
        // guarantees exactly one valid answer
    }
}
