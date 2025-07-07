class Solution {
public:
    int mySqrt(int x) {
        long long l = 0 , r = x, m;
        while(l<=r){
            m=l+(r-l)/2;
            if(m*m==x)return m;
            else if(m*m>x)r=m-1;
            else l =m+1;
        }
        if(m*m>x)m--;
        return m;
    }
};