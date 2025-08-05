class Solution {
public:
    bool possible(vector<int>& weights, int days, int k) {
        int total = 0;
        int m = 0;
         for (int i = 0; i < weights.size(); i++) {
            total += weights[i];
            if (total > k) {
                total = 0;
                m++ ;
                total += weights[i];
            }
        }
        if(total!=0)m++;
        if(total>k)m++;
        return m <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int max = INT_MIN;
        int sum = 0;
        for (int i = 0; i < weights.size(); i++) {
            if (max < weights[i])
                max = weights[i];
                sum+=weights[i];
        }
        if (days >= weights.size())
            return max;
        int low = max;
        int high = sum;
        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (possible(weights,days,mid)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};