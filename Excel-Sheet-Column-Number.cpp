class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size();
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
             sum*=26;
            sum+=columnTitle[i]-'A'+1;
        }
        return sum;
    }
};