class Solution {
public:
    int minOperations(int n) {
        int a=0;
        if(n==1)return 1;
        while(n != 0){
            int mindiff = INT_MAX;
            int power;
            
            for(int i = 0 ; i < 63 ; i++){
                int p = 1 << i;
                int diff = abs(p - n);
                if( diff < mindiff ){
                    mindiff = diff;
                    power = p;
                }else{
                    break;
                }
            }
            if(n == 1){
                a++;
                break;
            }
            if( power > n ){
                a++;
                n= power - n;
            }else{
                n = n - power;
                a++;
            }
        }
        return a;
    }
};