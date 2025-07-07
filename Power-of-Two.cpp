class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)return false;
        if(n==INT_MIN)return false;
        n= n & (n-1);
        if(n==0)return true;
        return false;
    }
};