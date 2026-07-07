class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x=0;
        while(n!=0){
            if(n%10!=0)x=x*10 + n%10;
            n/=10;
        }
        long long ans=0;
        long long sum = 0;
        while(x!=0){
            ans = ans*10 + x%10;
            sum+=x%10;
            x/=10;
        }
        return ans*sum;
    }
};