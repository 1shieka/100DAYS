class Solution {
    public boolean isPowerOfTwo(int n) {

        /*
            A power of 2 has exactly one set bit in binary.

            Examples:
            1  = 0001
            2  = 0010
            4  = 0100
            8  = 1000

            When we subtract 1:
            8     = 1000
            8 - 1 = 0111

            n & (n - 1) becomes 0 only when n has one set bit.
            
        */

        // Powers of two must be positive.
        // 0 and negative numbers are not powers of two.
        return n > 0 && (n & (n - 1)) == 0;
    }
}
