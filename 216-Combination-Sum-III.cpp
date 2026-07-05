class Solution {
public:
    void recursive(vector<int> arr, int index, int k , int n,vector<int>curr,vector<vector<int>> &result ){
        if(k==0){
            if(n==0)result.push_back(curr);
            return;
        }
        if(n<0 || index>= arr.size())return;
        curr.push_back(arr[index]);
        recursive(arr,index+1,k-1,n-arr[index],curr,result);
        curr.pop_back();
        recursive(arr,index+1,k,n,curr,result);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> arr = {1,2,3,4,5,6,7,8,9};
        vector<vector<int>> result;
        recursive(arr,0,k,n,{},result);
        return result;
    }
};