class Solution {
    public void reverseString(char[] s) {
        
        // One pointer from start.
        int left = 0;
        
        // Another pointer from end
        int right = s.length - 1;

        // Keep swapping characters until both pointers meet
        while (left < right) {
            
            // Store left character temporarily before overwriting it
            char temp = s[left];
            
            // Move right character to the left position
            s[left] = s[right];
            
            // Put stored left character at the right position
            s[right] = temp;

            // Move both pointers toward the center
            left++;
            right--;
        }
    }
}
