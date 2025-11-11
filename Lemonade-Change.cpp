class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int,int>hash;
        hash[5]=0;
        hash[10]=0;
        for(int i = 0 ; i < bills.size() ; i++){
            if(bills[i]==5){
                hash[5]++;
            }else if(bills[i]==10){
                hash[5]--;
                if(hash[5]<0)return false;
                hash[10]++;
            }else{
                if(hash[10]==0){
                    if(hash[5]<3)return false;
                    hash[5]=hash[5]-3;
                    hash[20]++;
                    continue;
                }
                hash[10]--;
                hash[5]--;
                if(hash[5]<0)return false;
                hash[20]++;
            }
        }
        return true;
    }
};