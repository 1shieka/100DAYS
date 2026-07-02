class Solution {
    public int removeElement(int[] nums, int val) {

        int k = 0; // Points to where the next valid element should be placed

        // Traverse every element in the array
        for (int i = 0; i < nums.length; i++) {

            // Keep only elements that are not equal to val
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        // k represents the number of elements not equal to val
        return k;
    }
}


/*
    
i is the read pointer: it checks every element.
k is the write pointer: it places only the elements that should remain.
    
Use one pointer k to store the position where the next
element that is not equal to val should be placed.

Traverse the array.
When nums[i] != val, copy it to nums[k] and move k forward. Elements equal to val are skipped.

After traversal, the first k elements contain all values except val, and k is returned as the answer.


For nums = [3,2,2,3] and val = 3:
i = 0 → 3 equals val → skip
i = 1 → 2 not equal → nums[0] = 2
i = 2 → 2 not equal → nums[1] = 2
i = 3 → 3 equals val → skip

nums = [2, 2, _, _]
k = 2

Time Complexity: O(n)
Space Complexity: O(1)



*/
