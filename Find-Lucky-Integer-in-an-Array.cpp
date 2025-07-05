class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        map <int,int>hash;
        for(int i = 0 ; i < n ; i++ ){
            hash[arr[i]]++;
        }
        int max = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            if(hash[arr[i]]==arr[i] && arr[i]>max)max = arr[i];
        }
        return (max != INT_MIN)?max:-1;
    }
};