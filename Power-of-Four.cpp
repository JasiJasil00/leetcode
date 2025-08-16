class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 1) return true;
        if (n <= 0 || (n & (n - 1)) != 0) return false; // Not a power of two

        int i = 0;
        while (i < 32) {
            if ((n & (1 << i)) != 0)
                return (i % 2 == 0); 
            i += 1;
        }

        return false; // Shouldn't reach here for valid power of two
    }
};
