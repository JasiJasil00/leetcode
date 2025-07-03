class Solution {
public:
    char kthCharacter(int k) {
        string v = "a";

        while(k>v.size()){
            int n = v.size();
            for(int i = 0 ; i < n ; i++ ){
                v.push_back(v[i]+1);
            }
        }
        return v[k-1];
    }
};