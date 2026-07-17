//Product of array excepts self


class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] answer = new int[n];

        // Store left products
        answer[0] = 1;
        for (int i = 1; i < n; i++) {
            answer[i] = answer[i - 1] * nums[i - 1];
        }
        
        // Store right product while updating answer
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            answer[i] = answer[i] * rightProduct;
            rightProduct = rightProduct * nums[i];
        }
        return answer;
    }
}

// 1. Create an answer array.
// 2. First pass: Store the product of all elements to the left of every index.
// 3. Second pass (from right to left): Maintain a running right product.
// 4. Multiply the left product already stored in answer[i] with the current right product.
// 5. Update the right product.
// 6. Return the answer array.
