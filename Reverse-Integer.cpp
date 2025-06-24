class Solution {
public:
    int reverse(int x) {
        int y = 1;
        if(x<=0)y=-1;
        long long num = 0;
        if(x!=INT_MIN){x = y * x;}
        else{return 0;}
        while(x!=0){
            num = (num + x%10)*10;
             x = x/10;
        }
        num = y* num;
        if(num/10 > INT_MAX || num/10 < INT_MIN)return 0;
        return num/10;
    }
};