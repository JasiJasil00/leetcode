class Solution {
public:
    void recursive(int n,string curr,vector<string> &result){
        if(n==0){
            result.push_back(curr);
            return;
        }
        int m = curr.size()-1;
        if(curr[m]=='0'){
            recursive(n-1,curr+'1',result);
        }else{
            recursive(n-1,curr+'0',result);
             recursive(n-1,curr+'1',result);
        }
        return;
    }
    vector<string> validStrings(int n) {
        vector<string>result;
        recursive(n-1,"0",result);
        recursive(n-1,"1",result);
        return result;
    }
};