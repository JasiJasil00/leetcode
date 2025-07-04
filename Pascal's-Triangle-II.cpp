class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector <int> result;
        long ans = 1;
        result.push_back(1);
        for(int i = 0 ; i < rowIndex ;i++){
            ans = ans*(rowIndex-i);
            ans = ans/(i+1);
            result.push_back(ans);
        }
        return result;
    }
};