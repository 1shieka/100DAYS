class Solution:
    def maxSubarraySumCircular(self, nums: List[int]) -> int:

        # Find the maximum subarray sum using Kadane's Algorithm
        currMax = maxSum = nums[0]

        for i in range(1, len(nums)):
            currMax = max(nums[i], currMax + nums[i])
            maxSum = max(maxSum, currMax)

        # Find the minimum subarray sum using Kadane's Algorithm
        currMin = minSum = nums[0]

        for i in range(1, len(nums)):
            currMin = min(nums[i], currMin + nums[i])
            minSum = min(minSum, currMin)

        # Calculate the total sum of the array
        total = sum(nums)

        # If all elements are negative,
        # return the maximum element
        if maxSum < 0:
            return maxSum

        # Circular maximum = Total Sum - Minimum Subarray Sum
        circularSum = total - minSum

        # Return the maximum of normal and circular subarray sums
        return max(maxSum, circularSum)
