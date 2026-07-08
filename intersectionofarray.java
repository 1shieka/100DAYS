// Use a frequency map: count each number in the first array, then traverse the second array. If a number is available in the map, add it to the answer and decrease its count.

import java.util.*;

class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        HashMap<Integer, Integer> map = new HashMap<>();
        ArrayList<Integer> list = new ArrayList<>();

        // Store frequency of every number in nums1
        for (int num : nums1) {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }

        // Check numbers of nums2
        for (int num : nums2) {

            // If num exists in map and is still available
            if (map.containsKey(num) && map.get(num) > 0) {
                list.add(num);

                // Use one occurrence of this number
                map.put(num, map.get(num) - 1);
            }
        }

        // Convert ArrayList into int array
        int[] ans = new int[list.size()];

        for (int i = 0; i < list.size(); i++) {
            ans[i] = list.get(i);
        }

        return ans;
    }
}

// Interview logic:
// 1. Count how many times every number occurs in nums1.
// 2. Traverse nums2.
// 3. If the current number is available in the map, add it to the answer.
// 4. Decrease its count so it cannot be added extra times.
// 5. Convert the ArrayList into an int array.
