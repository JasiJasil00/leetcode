class Solution {
public:
    double myPow(double x, long long n) {
       
        if(n==0)return 1;
        if(n<0){
            x=1/x;
            n=-n;
        }
        return ((n%2==1)?  x : 1) *myPow(x*x,n/2);
    }
};