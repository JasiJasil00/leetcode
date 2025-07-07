class Solution {
public:
    int hammingWeight(int n) {
        int sum = 0;
        int count = 0;
        while(sum < 32){
            int p = n & (1 << sum);
            if(p!=0)count++;
            sum +=1;
        }
        return count;
    }
};