//You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

//Merge nums1 and nums2 into a single array sorted in non-decreasing order.


class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int i = m - 1;       // last valid element in nums1
        int j = n - 1;       // last element in nums2
        int k = m + n - 1;   // last position in nums1

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

       // If nums2 still has elements left,
        // copy them into nums1
        // Remaining nums1 elements are already in correct position
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
}

// We merge from the end because nums1 has empty spaces at the end.
// If we merge from the front, we may overwrite elements of nums1
// before comparing them.

// i points to the last valid element of nums1.
// j points to the last element of nums2.
// k points to the last empty position in nums1.

// Compare nums1[i] and nums2[j].
// Place the larger element at nums1[k].
// Then move the pointer of that element backward,
// and also move k backward.

// Continue until one array is finished.
// If nums2 still has elements left, copy them into nums1.
// If nums1 has elements left, they are already in the correct position.

