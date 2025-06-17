class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        vector<int> ans(size+1);
        digits[size-1]+=1;
        if(digits[size-1]>=10)
        { 
            for( int i = size-1 ; i>0 ; i --){
                if(digits[i]>=10){
                    digits[i]-=10;
                    digits[i-1]+=1;
                    ans[i+1]=digits[i];
                }else{
                    break;
                }
            }
        }
        if(digits[0]>=10){
            ans[0]=1;
            ans[1]=digits[0]-10;
            return ans;
        }
        return digits;
    }
};