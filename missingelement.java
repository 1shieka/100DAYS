class Solution {
    int missingNum(int arr[]) {

        int n = arr.length + 1;

        // Calculate the expected sum of numbers from 1 to n
        int totalSum = n * (n + 1) / 2;

        int arraySum = 0;

        // Calculate the sum of elements present in the array
        for (int num : arr) {
            arraySum += num;
        }

        // The difference is the missing number
        return totalSum - arraySum;
    }
}

/*
Logic: 

    1.Find the expected sum of numbers from 1 to n.

    2.Calculate the sum of all elements present in the array.

    3.The difference between the expected sum and
    the actual sum gives the missing number.
    
    Time Complexity - O(n)
    Space Complexity - O(1)
*/
