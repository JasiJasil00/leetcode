class Solution {
public:
    bool possible(vector<int>& bloomDay, int m , int k, int day){
        long long count = 0;
        int bloom = 0;
        for(int i = 0 ; i < bloomDay.size(); i++){
            if(bloomDay[i]<=day){
                count++;
            }else{
                bloom+=(count/k);
                count = 0;
            }
        }
        bloom+=(count/k);
        if(bloom>=m)return true;
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int min = INT_MAX;
        int max = INT_MIN;
        int n = bloomDay.size();
        for(int i = 0 ; i < n ; i++){
            if(max < bloomDay[i])max=bloomDay[i];
            if(min > bloomDay[i])min=bloomDay[i];
        }
        int low = min;
        int high  = max;
        int ans=-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(possible(bloomDay,m,k,mid)){
                ans=mid;
                high = mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};