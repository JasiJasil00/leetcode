class Solution {
public:
    long long func(vector <int> &a , int hourly){
        long long total = 0;
        for(int i = 0 ; i < a.size() ; i++){
            total+=ceil((double)a[i] /hourly);
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = INT_MIN;
        for(int i = 0 ; i < piles.size(); i ++){
            max = std::max(max,piles[i]);
        }
        int low = 1;
        int high = max;
        int ans = high;
        while(low <= high){
            int mid = low + ( high - low )/2;
            long long time = func(piles,mid);
            if(time<=h){
               ans = mid;         // valid, try smaller
                high = mid - 1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};