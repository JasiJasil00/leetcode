class Solution {
public:
    bool equalFrequency(string word) {
        map<char,int> h;
        for(auto w : word){
            h[w]++;
        }

        for(auto &p : h){
            p.second--;
            int k = -1;
            int flag =0;
            for(auto c :h){
                if(k==-1 && c.second!=0){
                    k=c.second;
                }else if(c.second!=k && c.second!=0){
                    flag=1;
                    break;
                }
            }
            if(flag==0)return true;
            p.second++;
        }
        return false;
    }
};