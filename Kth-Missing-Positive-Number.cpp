class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0;
        int high = arr.size()-1;
        int miss= -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(arr[mid]-mid-1 < k){
                miss = mid;
                low = mid + 1;
            }else{
                high=mid-1;
            }
        }
        if(miss==-1)return k;
        return arr[miss]+k-arr[miss]+miss+1;
    }
};